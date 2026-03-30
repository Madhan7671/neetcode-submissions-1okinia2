class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need, window;

        // Step 1: Fill the need map
        for (char ch : t) {
            need[ch]++;
        }

        int have = 0;
        int needCount = need.size();
        int l = 0;
        int minLen = INT_MAX;
        int start = 0;

        // Step 2: Move right pointer i
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            window[ch]++;

            if (need.count(ch) && window[ch] == need[ch]) {
                have++;
            }

            // Step 3: When valid window, try to shrink from left
            while (have == needCount) {
                if (i - l + 1 < minLen) {
                    minLen = i - l + 1;
                    start = l;
                }

                window[s[l]]--;
                if (need.count(s[l]) && window[s[l]] < need[s[l]]) {
                    have--;
                }
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
