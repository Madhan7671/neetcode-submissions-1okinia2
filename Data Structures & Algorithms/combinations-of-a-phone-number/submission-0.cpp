class Solution {
public:
vector<string>ans;
unordered_map<char,string> mp={
    {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},
    {'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
};
string s;
void fn(int index,string& current)
{
    if(index==s.size())
    {
        ans.push_back(current);
        return;
    }
    char ch=s[index];
    string main=mp[ch];
    for(char i:main)
    {
        current.push_back(i);
        fn(index+1,current);
        current.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
        {
            return{};
        }
        s=digits;
        string x;
        fn(0,x);
        return ans;
    }
};
