class node{
    public:
    char val;
    bool terminal;
    unordered_map<char,node*>children;
    node()
    {
        val='\0';
        terminal=false;
    }
    node(char x)
    {
        val=x;
        terminal=false;
    }
    void maketerminal()
    {
        terminal=true;
        return;
    }
    bool isterminal()
    {
        return(terminal);
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
    
    bool startsWith(string words) {
        node* curr=root;
        for(int i=0;i<words.size();i++)
        {
            char ch=words[i];
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
