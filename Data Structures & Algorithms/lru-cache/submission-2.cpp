class LRUCache {
public:
class node{
    public:
    int val;
    int key;
    node* prev;
    node* next;
    node(int k,int v)
    {
        key=k;
        val=v;
        prev=nullptr;
        next=nullptr;
    }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
unordered_map<int,node*>mp;
int limit;
void addnode(node* newnode)
{
    node* headnext=head->next;
    head->next=newnode;
    headnext->prev=newnode;
    newnode->prev=head;
    newnode->next=headnext;
}
void dele(node* newnode)
{
    node* nodenext=newnode->next;
    node* nodeprev=newnode->prev;
    newnode->prev->next=nodenext;
    newnode->next->prev=nodeprev;
}
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
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
            mp.erase(key);
            dele(newnode);
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
