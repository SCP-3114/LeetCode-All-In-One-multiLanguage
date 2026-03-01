
ROMAN = {
    'I': 1,
    'V': 5,
    'X': 10,
    'L': 50,
    'C': 100,
    'D': 500,
    'M': 1000,
}

class Solution:
    def romanToInt(self, s):
        ans = 0
        for i in range(len(s) - 1):
            x = ROMAN[s[i]]
            y = ROMAN[s[i + 1]]
            ans += -x if x < y else x
        return ans + ROMAN[s[-1]]
