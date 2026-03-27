class Solution {
public:
    int maxOperations(string s) {
        int op = 0;
        int once = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                once++;
            } else if (i > 0 && s[i - 1] != '0') {
                op += once;
            }
        }
        return op;
    }
};