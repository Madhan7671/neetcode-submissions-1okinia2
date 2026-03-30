class Solution {
public:
    string decodeString(string s) {
        vector<string>stringstack;
        vector<int>countstack;
        int count=0;
        string x="";
        for(int i:s)
        {
            if(isdigit(i))
            {
                count=count*10+(i-'0');
            }
            else if(i=='[')
            {
                countstack.push_back(count);
                count=0;
                stringstack.push_back(x);
                x="";
            }
            else if(i==']')
            {
                string temp=x;
                x=stringstack.back();
                stringstack.pop_back();
                int z=countstack.back();
                countstack.pop_back();
                for(int i=0;i<z;i++)
                {
                    x+=temp;
                }
                x;
            }
            else{
                x+=i;
            }
        }
        return x;
    }
};