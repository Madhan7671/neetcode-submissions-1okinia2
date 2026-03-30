class Solution {
public:
string s;
vector<string>ans;
unordered_map<char,string>mp={
    {'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}
};
void fn(int index,string& curr)
{
    if(index==s.size())
    {
        ans.push_back(curr);
    }
    string word=mp[s[index]];
    for(char i:word)
    {
        curr.push_back(i);
        fn(index+1,curr);
        curr.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        {
            return{};
        }
        s=digits;
        string curr;
        fn(0,curr);
        return ans;
    }
};
