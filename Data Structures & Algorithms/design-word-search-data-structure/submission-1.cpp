class node{
    public:
    char data;
    bool terminal;
    unordered_map<char,node*>children;
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
class WordDictionary {
public:
node* root;
    WordDictionary() {
        root=new node();
    }
    
    void addWord(string word) {
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
                node* child=new node(ch);
                curr->children[ch]=child;
                curr=curr->children[ch];
            }
        }
        curr->maketerminal();
    }
    bool fn(string word,int index,node* curr)
    {
        if(index==word.size())
        {
            return curr->isterminal();
        }
        char ch=word[index];
        if(ch=='.')
        {
            for(auto& i:curr->children)
            {
                if(fn(word,index+1,i.second))
                {
                    return true;
                }
            }
            return false;
        }
        else{
            if(!curr->children.count(ch))
            {
                return false;
            }
            return(fn(word,index+1,curr->children[ch]));
        }
    }
    bool search(string word) {
        return(fn(word,0,root));
    }
};
