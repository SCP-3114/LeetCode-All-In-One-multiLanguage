class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result = "";
        
        // 当任意一个字符串未遍历完，或者还有进位时，继续循环
        while (i >= 0 || j >= 0 || carry) {
            // 获取当前位的值，如果索引已越界则取 0
            int bit_a = (i >= 0) ? a[i] - '0' : 0;
            int bit_b = (j >= 0) ? b[j] - '0' : 0;
            
            // 计算当前位的总和
            int total = bit_a + bit_b + carry;
            // 计算进位 (0 或 1)
            carry = total / 2;
            // 将当前位的余数 (0 或 1) 转换为字符并添加到结果字符串末尾
            result.push_back((total % 2) + '0');
            
            i--;
            j--;
        }
        
        // 此时 result 是逆序的（从低位到高位），需要反转回来
        reverse(result.begin(), result.end());
        
        return result;
    }
};
