class Solution {
public:
    bool hasSameDigits(string s) {
        vector<int> digits;
        for (char c : s) {
            digits.push_back(c - '0');
        }
        int len = digits.size();
        while (len > 2) {
            for (int i = 0; i < len - 1; i++) {
                digits[i] = (digits[i] + digits[i + 1]) % 10;
            }
            len--;
        }
        return digits[0] == digits[1];
    }
};