
class Solution:
    def removeDuplicates(self, nums):
        # Python中的列表去重方法，保持原有顺序
        nums[:] = list(dict.fromkeys(nums))
        return len(nums)
