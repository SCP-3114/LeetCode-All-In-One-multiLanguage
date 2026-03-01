
class Solution:
    def lengthOfLastWord(self, s):
        length = 0
        i = len(s) - 1

        # 第一步：从后往前跳过末尾的所有空格
        while i >= 0 and s[i] == ' ':
            i -= 1

        # 第二步：统计最后一个单词的长度
        while i >= 0 and s[i] != ' ':
            length += 1
            i -= 1

        return length
