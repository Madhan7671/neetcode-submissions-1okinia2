class Solution {
public:

    struct Trie {
        Trie* child[26];
        string word;

        Trie() {
            for(int i = 0; i < 26; i++) child[i] = NULL;
            word = "";
        }
    };

    void insert(Trie* root, string w) {
        Trie* node = root;

        for(char c : w) {
            int idx = c - 'a';

            if(!node->child[idx])
                node->child[idx] = new Trie();

            node = node->child[idx];
        }

        node->word = w;
    }

    void dfs(vector<vector<char>>& board, int i, int j, Trie* node, vector<string>& ans) {

        char c = board[i][j];

        if(c == '#' || !node->child[c - 'a'])
            return;

        node = node->child[c - 'a'];

        if(node->word != "") {
            ans.push_back(node->word);
            node->word = "";
        }

        board[i][j] = '#';

        int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

        for(auto &d : dir) {
            int x = i + d[0];
            int y = j + d[1];

            if(x >= 0 && y >= 0 && x < board.size() && y < board[0].size())
                dfs(board, x, y, node, ans);
        }

        board[i][j] = c;
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {

        Trie* root = new Trie();

        for(string w : words)
            insert(root, w);

        vector<string> ans;

        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                dfs(board, i, j, root, ans);
            }
        }

        return ans;
    }
};