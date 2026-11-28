class Solution {
public:
    string decodeString(string s) {
        vector<string>strstack;
        vector<int>numstack;
        string counts="";
        string ans="";
        for(char ch:s)
        {
            if(isdigit(ch))
            {
                counts+=ch;
            }
            else if(ch=='[')
            {
                numstack.push_back(stoi(counts));
                counts="";
                strstack.push_back(ans);
                ans="";
            }
            else if(ch==']')
            {
                string temp=ans;
                int x=numstack.back();
                numstack.pop_back();
                ans=strstack.back();
                strstack.pop_back();
                for(int i=0;i<x;i++)
                {
                    ans+=temp;
                }
            }
            else{
                ans+=ch;
            }
        }
        return ans;
    }
};