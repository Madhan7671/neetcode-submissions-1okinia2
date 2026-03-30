class node{
    public:
    unordered_map<char,node*>children;
    char val;
    bool terminal;
    node()
    {
        val='\0';
        terminal=false;
    }
    node(int data)
    {
        val=data;
        terminal=false;
    }
    void maketerminal()
    {
        terminal=true;
        return;
    }
    bool isterminal()
    {
        return(terminal==true);
    }
};
class PrefixTree {
public:
node* root=new node();
    PrefixTree() {
    }
    
    void insert(string word) {
        node* curr=root;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(curr->children.count(ch))
            {
                curr=curr->children[ch];
            }
            else{
                node* child=new node(ch);
                curr->children[ch]=child;
                curr=curr->children[ch];
            }
        }
        return(curr->maketerminal());
    }
    
    bool search(string word) {
        node* curr=root;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(curr->children.count(ch))
            {
                curr=curr->children[ch];
            }
            else{
                return false;
            }
        }
        return(curr->isterminal());
    }
    
    bool startsWith(string word) {
        node* curr=root;
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(curr->children.count(ch))
            {
                curr=curr->children[ch];
            }
            else{
                return false;
            }
        }
        return true;
    }
};
