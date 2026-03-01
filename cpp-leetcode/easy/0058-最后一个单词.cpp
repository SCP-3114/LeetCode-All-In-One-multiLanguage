class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // 第一步：从后往前跳过末尾的所有空格
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // 第二步：统计最后一个单词的长度
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};
