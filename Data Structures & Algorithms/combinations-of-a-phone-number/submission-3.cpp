class Solution {
public:
vector<string>ans;
string s;
unordered_map<char,string>mp{{'2',"abc"},{'3',"def"},{'4',"ghi"},{'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}};
void fn(int index,string& curr)
{
    if(index>=s.size()){
        ans.push_back(curr);
        return;
    }
    string word=mp[s[index]];
    for(char ch:word)
    {
        curr.push_back(ch);
        fn(index+1,curr);
        curr.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        string curr;
        s=digits;
        if(digits.size()==0)
        {
            return {};
        }
        fn(0,curr);
        return ans;
    }
};
