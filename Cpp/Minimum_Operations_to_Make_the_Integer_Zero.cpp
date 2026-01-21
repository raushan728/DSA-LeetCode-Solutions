class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (int k = 1; k <= 60; k++) {
            long long tar = (long long)num1 - (long long)k * num2;
            if (tar < 0) {
                break;
            }
            int setBits = __builtin_popcountll(tar);
            if (setBits <= k && tar >= k) {
                return k;
            }
        }
        return -1;
    }
};