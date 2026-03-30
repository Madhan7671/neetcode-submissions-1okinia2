class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;

        sort(s1.begin(), s1.end());  // sorted s1 for comparison

        for (int i = 0; i <= n2 - n1; i++) {
            string window = s2.substr(i, n1);
            sort(window.begin(), window.end());
            if (window == s1) {
                return true;
            }
        }

        return false;
    }
};
