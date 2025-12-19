class Solution {
public:
    void computeLPS(std::string& needle, std::vector<int>& lps) {
        int m = needle.length();
        lps[0] = 0;
        int length = 0;
        int i = 1;

        while (i < m) {
            if (needle[i] == needle[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        if (needle.empty())
            return 0;

        int n = haystack.length();
        int m = needle.length();

        if (m > n)
            return -1;
        vector<int> lps(m, 0);
        computeLPS(needle, lps);

        int i = 0;
        int j = 0;

        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            }

            if (j == m) {
                return i - j;
            } else if (i < n && haystack[i] != needle[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return -1;
    }
};