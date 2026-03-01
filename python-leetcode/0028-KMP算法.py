
class Solution:
    def strStr(self, s, p):
        # next 数组
        next_arr = [0] * (len(p) + 1)
        # res数组:记录p在s中出现的位置下标
        res = []

        # 求next数组过程
        j = 2
        i = 0
        while j <= len(p):
            while i > 0 and p[j - 1] != p[i]:
                i = next_arr[i]
            if p[j - 1] == p[i]:
                i += 1
            next_arr[j] = i
            j += 1

        # p和s匹配的过程
        i = 0
        j = 0
        while i < len(s):
            while j > 0 and s[i] != p[j]:
                j = next_arr[j]
            if s[i] == p[j]:
                j += 1
            if j == len(p):  # 如果找到了一个匹配的位置
                res.append(i - j + 1)   # 记录结果
                j = next_arr[j]
            i += 1

        if len(res) > 0:
            return res[0]  # 题目要求返回第一个出现的位置
        return -1
