func groupAnagrams(strs []string) [][]string {
    groups := make(map[string][]string)
    
    for _, str := range strs {
        key := sortString(str)
        groups[key] = append(groups[key], str)
    }
    
    result := make([][]string, 0, len(groups))
    for _, group := range groups {
        result = append(result, group)
    }
    return result
}

func sortString(s string) string {
    runes := []rune(s)
    for i := 0; i < len(runes)-1; i++ {
        for j := i + 1; j < len(runes); j++ {
            if runes[i] > runes[j] {
                runes[i], runes[j] = runes[j], runes[i]
            }
        }
    }
    return string(runes)
}
