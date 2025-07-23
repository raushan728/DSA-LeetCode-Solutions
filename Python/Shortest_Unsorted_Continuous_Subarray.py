class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        start = 0
        n = len(nums)
        end = n - 1
        while start < end and nums[start] <= nums[start + 1]:
            start += 1
        if start == end:
            return 0
        while end > 0 and nums[end] >= nums[end - 1]:
            end -= 1
        submin = nums[start]
        submax = nums[start]
        for i in range(start, end + 1):
            submin = min(submin, nums[i])
            submax = max(submax, nums[i])
        while start > 0 and nums[start - 1] > submin:
            start -= 1
        while end < n - 1 and nums[end + 1] < submax:
            end += 1
        return end - start + 1
