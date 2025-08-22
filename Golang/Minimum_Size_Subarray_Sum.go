func minSubArrayLen(target int, nums []int) int {
	left, sum := 0, 0
	minLength := len(nums) + 1

	for right := 0; right < len(nums); right++ {
		sum += nums[right]

		for sum >= target {
			if right-left+1 < minLength {
				minLength = right - left + 1
			}
			sum -= nums[left]
			left++
		}
	}

	if minLength > len(nums) {
		return 0
	}
	return minLength
}
