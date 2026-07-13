class Solution {
public:
unordered_map<char,string>mp={{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
string s;
vector<string>ans;
void fn(int index,string curr)
{
    if(index>=s.size())
    {
        ans.push_back(curr);
        return;
    }
    string w1=mp[s[index]];
    for(char ch:w1)
    {
        curr.push_back(ch);
        fn(index+1,curr);
        curr.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        s=digits;
        if(digits.empty())
        {
            return {};
        }
        fn(0,"");
        return ans;
    }
};
