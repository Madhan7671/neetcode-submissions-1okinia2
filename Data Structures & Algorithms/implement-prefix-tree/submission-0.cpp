class node{
    public:
    char data;
    unordered_map<char,node*>children;
    bool terminal;
    node()
    {
        data='\0';
        terminal=false;
    }
    node(char x)
    {
        data=x;
        terminal=false;
    }
    void maketerminal()
    {
        terminal=true;
    }
    bool isterminal()
    {
        return(terminal==true);
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
            else
            {
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
