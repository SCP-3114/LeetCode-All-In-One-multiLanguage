class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // 从数组最后一位开始向前遍历
        for (int i = n - 1; i >= 0; i--) {
            // 当前位加 1
            digits[i]++;
            
            // 判断是否有进位 (结果是否为 10)
            // 如果 digits[i] == 10，说明当前位变为 0，需要进位
            // 如果 digits[i] != 10，说明没有进位，直接返回结果
            if (digits[i] != 10) {
                return digits;
            }
            
            // 如果能走到这里，说明 digits[i] 是 10
            // 将当前位设为 0，继续下一次循环处理前一位
            digits[i] = 0;
        }
        
        // 如果代码能走到这里，说明所有的位都变成了 0（例如 99 -> 00）
        // 意味着最高位发生了进位，需要在最前面插入 1
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
