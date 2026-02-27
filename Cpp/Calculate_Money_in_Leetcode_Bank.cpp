class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int rem = n % 7;
        int total = 7 * weeks * (weeks + 1) / 2 + 21 * weeks;
        int remaining = rem * (weeks + 1) + rem * (rem - 1) / 2;
        return total + remaining;
    }
};