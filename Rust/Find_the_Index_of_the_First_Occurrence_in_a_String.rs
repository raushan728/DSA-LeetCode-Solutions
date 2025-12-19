impl Solution {
    fn compute_lps(needle: &String) -> Vec<usize> {
        let m = needle.len();
        let mut lps = vec![0; m];
        let mut length = 0;
        let mut i = 1;
        let needle_bytes = needle.as_bytes();

        while i < m {
            if needle_bytes[i] == needle_bytes[length] {
                length += 1;
                lps[i] = length;
                i += 1;
            } else {
                if length != 0 {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i += 1;
                }
            }
        }
        lps
    }
    pub fn str_str(haystack: String, needle: String) -> i32 {
        if needle.is_empty() { return 0; }

        let n = haystack.len();
        let m = needle.len();

        if m > n { return -1; }

        let lps = Self::compute_lps(&needle);
        let haystack_bytes = haystack.as_bytes();
        let needle_bytes = needle.as_bytes();
        
        let mut i = 0;
        let mut j = 0;

        while i < n {
            if haystack_bytes[i] == needle_bytes[j] {
                i += 1;
                j += 1;
            }

            if j == m {
                return (i - j) as i32;
            } else if i < n && haystack_bytes[i] != needle_bytes[j] {
                if j != 0 {
                    j = lps[j - 1];
                } else {
                    i += 1;
                }
            }
        }
        -1
    }
}