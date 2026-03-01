class Solution {
public:
    int strStr(string s, string p) {
        vector<int> next(p.size() + 1, 0);  // next 数组 
        vector<int> res;		            // res数组:记录p在s中出现的位置下标
        for (int j = 2, i = 0; j <= p.size(); j++) {   // 求next数组过程
            while (i > 0 && p[j - 1] != p[i]) i = next[i];
            if (p[j - 1] == p[i]) i++;
            next[j] = i;
        }
        for (int i = 0, j = 0; i < s.size(); i++) {   // p和s匹配的过程
            while (j > 0 && s[i] != p[j]) j = next[j];
            if (s[i] == p[j]) j++;
            if (j == p.size()) {  // 如果找到了一个匹配的位置
                res.push_back(i - j + 1);   // 记录结果
                j = next[j];
            }
        }
        if (res.size() > 0)
            return res[0];  // 题目要求返回第一个出现的位置
        return -1;
    }
};

