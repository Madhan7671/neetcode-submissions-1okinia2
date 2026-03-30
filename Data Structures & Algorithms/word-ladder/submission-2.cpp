class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>mp(wordList.begin(),wordList.end());
        if(!mp.count(endWord))
        {
            return 0;
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty())
        {
            auto[word,steps]=q.front();
            q.pop();
            if(word==endWord)
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
                    if(mp.count(word))
                    {
                        q.push({word,steps+1});
                        mp.erase(word);
                    }
                }
                word[i]=ch;
            }
        }
        return 0;
    }
};
