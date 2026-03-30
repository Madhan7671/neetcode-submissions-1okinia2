class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(),wordList.end());
        if(!st.count(endword))
        {
            return 0;
        }
        queue<pair<string,int>>q;
        q.push({beginword,1});
        while(!q.empty())
        {
            auto&[word,steps]=q.front();
            q.pop();
            if(word==endword)
            {
                return steps;
            }
            for(int i=0;i<word.size();i++)
            {
                char ch=word[i];
                for(char j='a';j<='z';j++)
                {
                    word[i]=j;
                    if(j==ch)
                    {
                        continue;
                    }
                    if(st.count(word))
                    {
                        q.push({word,steps+1});
                        st.erase(word);
                    }
                }
                word[i]=ch;
            }
        }
        return 0;
    }
};
