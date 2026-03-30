class LRUCache {
public:
class node{
    public:
    int key;
    int val;
    node* next;
    node* prev;
    node(int ke,int va)
    {
        key=ke;
        val=va;
        next=nullptr;
        prev=nullptr;
    }
};
node* head=new node(-1,-1);
node* tail=new node(-1,-1);
void addNode(node* newnode)
{
    node* headnext=head->next;
    newnode->next=headnext;
    newnode->prev=head;
    head->next=newnode;
    newnode->next->prev=newnode;
}
void dele(node* newnode)
{
    node* newprev=newnode->prev;
    node* newnext=newnode->next;
    newnode->prev->next=newnext;
    newnode->next->prev=newprev;
}
int limit;
unordered_map<int,node*>mp;
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
        node* x=mp[key];
        int ans=x->val;
        mp.erase(key);
        dele(x);
        addNode(x);
        mp[key]=x;
        return ans;
    }
    
    void put(int key, int value) {
        if(mp.count(key))
        {
            node* x=mp[key];
            mp.erase(key);
            dele(x);
        }
        if(mp.size()==limit)
        {
            mp.erase(tail->prev->key);
            dele(tail->prev);
        }
        node* newnode=new node(key,value);
        addNode(newnode);
        mp[key]=newnode;
    }
};
