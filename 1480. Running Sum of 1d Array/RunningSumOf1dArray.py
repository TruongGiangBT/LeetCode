class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        l = len(nums)
        for i in range(1,l):
            nums[i] += nums[i-1]
        return nums