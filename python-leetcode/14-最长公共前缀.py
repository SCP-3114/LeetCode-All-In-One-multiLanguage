
class Solution:
    def longestCommonPrefix(self, strs):
        s0 = strs[0]
        for j in range(len(s0)):
            for s in strs:
                if j == len(s) or s[j] != s0[j]:
                    return s0[:j]
        return s0
