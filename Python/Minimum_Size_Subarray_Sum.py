class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        k = 0
        sum = 0
        min_length = float("inf")
        for i in range(len(nums)):
            sum += nums[i]
            while sum >= target:
                min_length = min(min_length, i - k + 1)
                sum -= nums[k]
                k += 1
        if min_length == float("inf"):
            return 0
        else:
            return min_length
