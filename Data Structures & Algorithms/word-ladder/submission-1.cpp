class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>adj(wordList.begin(),wordList.end());
        if(!adj.count(endWord))
        {
            return 0;
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty())
        {
            auto[word,step]=q.front();
            q.pop();
            if(word==endWord)
            {
                return step;
            }
            for(int i=0;i<word.size();i++)
            {
                char ch=word[i];
                for(char j='a';j<='z';j++)
                {
                    if(j==ch)
                    {
                        continue;
                    }
                    word[i]=j;
                    if(adj.count(word))
                    {
                        q.push({word,step+1});
                        adj.erase(word);
                    }
                }
                word[i]=ch;
            }
        }
        return 0;
    }
};
