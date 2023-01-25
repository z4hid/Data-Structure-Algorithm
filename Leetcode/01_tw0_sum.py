class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        val = {}

        for i, n in enumerate(nums):
            d = target - n # Differecne = Target - Number
            if d in val:
                return [val[d],i]
            val[n] = i
