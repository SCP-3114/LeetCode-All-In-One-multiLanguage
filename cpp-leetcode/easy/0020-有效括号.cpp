class Solution {
public:
    bool isValid(string s) {
        // 定义右括号到左括号的映射，方便快速匹配
        unordered_map<char, char> bracketMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        stack<char> st; // 存储左括号的栈

        for (char c : s) {
            // 情况1：是右括号（key存在于map中）
            if (bracketMap.find(c) != bracketMap.end()) {
                // 栈空 或 栈顶左括号不匹配 → 无效
                if (st.empty() || st.top() != bracketMap[c]) {
                    return false;
                }
                // 匹配成功，弹出栈顶
                st.pop();
            } 
            // 情况2：是左括号，压入栈
            else {
                st.push(c);
            }
        }

        // 遍历完所有字符后，栈必须为空（无残留左括号）
        return st.empty();
    }
};

