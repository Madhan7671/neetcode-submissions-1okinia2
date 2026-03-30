class LRUCache {
public:
class node{
    public:
    int key;
    int val;
    node* prev;
    node* next;
    node(int k,int v)
    {
        key=k;
        val=v;
        next=nullptr;
        prev=nullptr;
    }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
unordered_map<int,node*>mp;
int limit;
void addnode(node* newnode)
{
    node* oldnext=head->next;
    head->next=newnode;
    newnode->next=oldnext;
    oldnext->prev=newnode;
    newnode->prev=head;
}
void dele(node* oldnode)
{
    node* oldprev=oldnode->prev;
    node* oldnext=oldnode->next;
    oldprev->next=oldnext;
    oldnext->prev=oldprev;
}
    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    int get(int key) {
        if(mp.find(key)==mp.end())
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
        if(mp.find(key)!=mp.end())
        {
            node* oldnode=mp[key];
            dele(oldnode);
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
