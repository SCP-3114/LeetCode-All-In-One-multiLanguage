
class Solution:
    def isValid(self, s):
        # 定义右括号到左括号的映射，方便快速匹配
        bracket_map = {
            ')': '(',
            '}': '{',
            ']': '['
        }
        stack = []  # 存储左括号的栈

        for c in s:
            # 情况1：是右括号（key存在于map中）
            if c in bracket_map:
                # 栈空 或 栈顶左括号不匹配 → 无效
                if not stack or stack[-1] != bracket_map[c]:
                    return False
                # 匹配成功，弹出栈顶
                stack.pop()
            # 情况2：是左括号，压入栈
            else:
                stack.append(c)

        # 遍历完所有字符后，栈必须为空（无残留左括号）
        return not stack
