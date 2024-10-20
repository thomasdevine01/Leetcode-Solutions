class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}

        for i, v in enumerate(nums):

            target1 = target - v
            if target - v in seen:
                return [i, seen[target1]]
            seen[v] = i
        return [0,1]

