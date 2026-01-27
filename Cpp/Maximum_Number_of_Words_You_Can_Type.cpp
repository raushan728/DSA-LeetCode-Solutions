class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool> brk(26, false);
        for (char c : brokenLetters)
            brk[c - 'a'] = true;
        int cnt = 0;
        bool ok = true;
        for (char c : text) {
            if (c == ' ') {
                if (ok)
                    cnt++;
                ok = true;
            } else {
                if (brk[c - 'a'])
                    ok = false;
            }
        }
        if (ok)
            cnt++;
        return cnt;
    }
};