
class Solution:
    def removeElement(self, nums, val):
        origin_size = 0
        for x in nums:
            if x != val:
                nums[origin_size] = x
                origin_size += 1
        return origin_size
