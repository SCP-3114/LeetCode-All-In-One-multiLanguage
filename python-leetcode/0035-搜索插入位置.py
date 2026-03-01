
from bisect import bisect_left

class Solution:
    def searchInsert(self, nums, target):
        # bisect_left 返回第一个 >= target 的元素的索引
        return bisect_left(nums, target)
