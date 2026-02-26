class Solution {
public:
    bool isBal(int x) {
        int freq[10] = {0};
        int temp = x;
        while (temp > 0) {
            freq[temp % 10]++;
            temp /= 10;
        }
        for (int i = 0; i <= 9; i++) {
            if (freq[i] > 0 && freq[i] != i)
                return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        int x = n + 1;
        while (true) {
            if (isBal(x))
                return x;
            x++;
        }
    }
};