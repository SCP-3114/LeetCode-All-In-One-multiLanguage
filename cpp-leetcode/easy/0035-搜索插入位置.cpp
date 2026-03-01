class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // lower_bound 返回指向第一个 >= target 的元素的迭代器
        auto it = lower_bound(nums.begin(), nums.end(), target);
        
        // 计算迭代器距离 begin 的距离，即为索引
        return it - nums.begin();
    }
};
