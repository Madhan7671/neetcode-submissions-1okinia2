class node{
    public:
    unordered_map<char,node*>children;
    bool terminal;
    char data;
    node()
    {
        data='\0';
        terminal=false;
    }
    node(char ch)
    {
        data=ch;
        terminal=false;
    }
    void maketerminal()
    {
        terminal=true;
    }
    bool isterminal()
    {
        return(terminal);
    }
};
class PrefixTree {
public:
node* root;
    PrefixTree() {
        root=new node();
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
        curr->maketerminal();
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
    
    bool startsWith(string prefix) {
        node* curr=root;
        for(int i=0;i<prefix.size();i++)
        {
            char ch=prefix[i];
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
