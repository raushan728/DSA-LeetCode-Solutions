class Solution {
    public String minWindow(String s, String t) {
        if (s.length() < t.length()) {
            return "";
        }
        int[] need = new int[128];
        for (char c : t.toCharArray()) {
            need[c]++;
        }
        int req = t.length();
        int right = 0, left = 0;
        int bestLen = Integer.MAX_VALUE, bestStart = 0;
        while (right < s.length()) {
            char c = s.charAt(right);
            if (need[c] > 0) {
                req--;
            }
            need[c]--;
            right++;
            while (req == 0) {
                if (right - left < bestLen) {
                    bestLen = right - left;
                    bestStart = left;
                }
                char lc = s.charAt(left);
                need[lc]++;
                if (need[lc] > 0) {
                    req++;
                }
                left++;
            }
        }
        return bestLen == Integer.MAX_VALUE ? "" : s.substring(bestStart, bestLen + bestStart);
    }
}