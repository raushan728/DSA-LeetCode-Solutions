class Solution {
    fun minWindow(s: String, t: String): String {
        if (s.length < t.length) return ""
        
        val need = IntArray(128)
        for (c in t) {
            need[c.toInt()]++
        }
        
        var req = t.length
        var left = 0
        var right = 0
        var bestLen = Int.MAX_VALUE
        var bestStart = 0
        
        while (right < s.length) {
            val c = s[right]
            if (need[c.toInt()] > 0) {
                req--
            }
            need[c.toInt()]--
            right++
            
            while (req == 0) {
                if (right - left < bestLen) {
                    bestLen = right - left
                    bestStart = left
                }
                
                val lc = s[left]
                need[lc.toInt()]++
                if (need[lc.toInt()] > 0) {
                    req++
                }
                left++
            }
        }
        
        return if (bestLen == Int.MAX_VALUE) "" else s.substring(bestStart, bestStart + bestLen)
    }
}
