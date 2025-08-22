func isAnagram(s string, t string) bool {
	if len(s) != len(t) {
		return false
	}

	count := make([]int, 26)

	for _, char := range s {
		count[char-'a']++
	}

	for _, char := range t {
		count[char-'a']--
		if count[char-'a'] < 0 {
			return false
		}
	}
	return true
}
