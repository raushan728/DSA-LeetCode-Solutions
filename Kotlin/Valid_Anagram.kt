class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        if (s.length != t.length) return false
        
        val count = IntArray(26)
        
        for (c in s) {
            count[c - 'a']++
        }
        
        for (c in t) {
            count[c - 'a']--
            if (count[c - 'a'] < 0) {
                return false
            }
        }
        return true
    }
}
