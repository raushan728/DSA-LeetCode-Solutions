class Solution {
    fun groupAnagrams(strs: List<String>): List<List<String>> {
        val map = HashMap<String, MutableList<String>>()
        
        for (s in strs) {
            val count = IntArray(26)
            for (c in s) {
                count[c - 'a']++
            }
            
            val key = count.joinToString("#") { it.toString() }
            if (!map.containsKey(key)) {
                map[key] = mutableListOf()
            }
            map[key]!!.add(s)
        }
        
        return map.values.toList()
    }
}
