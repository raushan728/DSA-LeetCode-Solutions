func findUnsortedSubarray(nums []int) int {
	n := len(nums)
	maxVal, minVal := nums[0], nums[n-1]
	start, end := -1, -2
	for i := 1; i < n; i++ {
		maxVal = max(maxVal, nums[i])
		minVal = min(minVal, nums[n-1-i])
		if nums[i] < maxVal {
			end = i
		}
		if nums[n-1-i] > minVal {
			start = n - 1 - i
		}
	}
	return end - start + 1
}

func max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func min(a, b int) int {
	if a < b {
		return a
	}
	return b
}