class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        
        length = len(nums)
        value_dict = {}
        for i in range(length):
            if target - nums[i] in value_dict:
                return [value_dict[target - nums[i]],i]
            value_dict[nums[i]] = i
        return []