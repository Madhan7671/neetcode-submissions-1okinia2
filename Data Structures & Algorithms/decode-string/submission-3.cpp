class Solution {
public:
    string decodeString(string s) {
        vector<string>stringstack;
        vector<int>countstack;
        string curr="";
        int count=0;
        for(char ch:s)
        {
            if(isdigit(ch))
            {
                count=count*10+(ch-'0');
            }
            else if(ch=='[')
            {
                countstack.push_back(count);
                stringstack.push_back(curr);
                curr="";
                count=0;
            }
            else if(ch==']')
            {
                string temp=curr;
                curr=stringstack.back();
                stringstack.pop_back();
                int x=countstack.back();
                countstack.pop_back();
                for(int i=0;i<x;i++)
                {
                    curr+=temp;
                }
            }
            else{
                curr+=ch;
            }
        }
        return curr;
    }
};