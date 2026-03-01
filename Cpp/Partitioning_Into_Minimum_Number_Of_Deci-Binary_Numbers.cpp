class Solution {
public:
    int minPartitions(string n) {
        int maxD = 0;
        for (char c : n) {
            int digit = c - '0';
            if (digit > maxD)
                maxD = digit;
            if (maxD == 9)
                return 9;
        }
        return maxD;
    }
};