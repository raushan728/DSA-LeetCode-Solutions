class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        max_so_far = float('-inf')
        current_max = 0
        
        for num in nums:
            current_max += num
            if max_so_far < current_max:
                max_so_far = current_max
            if current_max < 0:
                current_max = 0
        return max_so_far