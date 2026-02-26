class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string& s0 = strs[0];
        for (int j = 0; j < s0.size(); j++) {
            for (string& s : strs) {
                if (j == s.size() || s[j] != s0[j]) { 
                    return s0.substr(0, j);
                }
            }
        }
        return s0;
    }
};
