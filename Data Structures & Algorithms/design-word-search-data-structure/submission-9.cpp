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
    }
    bool isterminal()
    {
        return(terminal);
    }
};
class WordDictionary {
public:
    WordDictionary() {
        
    }
    node* root=new node();
    void addWord(string word) {
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
    bool fn(int index,string word,node* curr)
    {
        if(index==word.size())
        {
            return(curr->isterminal());
        }
        char ch=word[index];
        if(ch=='.')
        {
            for(auto& i:curr->children)
            {
                if(fn(index+1,word,i.second))
                {
                    return true;
                }
            }
        }
        else{
            if(!curr->children.count(ch))
            {
                return false;
            }
            return(fn(index+1,word,curr->children[ch]));
        }
        return false;
    }
    bool search(string word) {
        return(fn(0,word,root));
    }
};
