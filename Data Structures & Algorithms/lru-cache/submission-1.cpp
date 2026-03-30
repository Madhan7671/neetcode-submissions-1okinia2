class LRUCache {
public:
class node{
    public:
    int val;
    int key;
    node* next;
    node* prev;
    node(int k,int v)
    {
        val=v;
        key=k;
        next=nullptr;
        prev=nullptr;
    }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
unordered_map<int,node*>mp;
int limit;
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void addnode(node* newnode)
    {
        node* headnext=head->next;
        head->next=newnode;
        newnode->prev=head;
        newnode->next=headnext;
        headnext->prev=newnode;
    }
    void dele(node* newnode)
    {
        node* nodeprev=newnode->prev;
        node* nodenext=newnode->next;
        nodeprev->next=nodenext;
        nodenext->prev=nodeprev;
    }
    int get(int key) {
        if(!mp.count(key))
        {
            return -1;
        }
        node* newnode=mp[key];
        int ans=newnode->val;
        mp.erase(key);
        dele(newnode);
        addnode(newnode);
        mp[key]=newnode;
        return ans;
    }
    
    void put(int key, int value) {
        if(mp.count(key))
        {
            node* newnode=mp[key];
            dele(newnode);
            mp.erase(key);
        }
        if(mp.size()==limit)
        {
            mp.erase(tail->prev->key);
            dele(tail->prev);
        }
        node* newnode=new node(key,value);
        addnode(newnode);
        mp[key]=newnode;
    }
};
