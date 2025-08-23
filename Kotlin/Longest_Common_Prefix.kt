class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        if (strs.isEmpty()) return ""
        
        var prefix = strs[0]
        for (i in 1 until strs.size) {
            var j = 0
            while (j < prefix.length && j < strs[i].length && prefix[j] == strs[i][j]) {
                j++
            }
            prefix = prefix.substring(0, j)
            if (prefix == "") return ""
        }
        return prefix
    }
}
