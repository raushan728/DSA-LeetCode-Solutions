class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 0;
        for (int p : piles) {
            high = max(high, p);
        }
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canFinish(piles, mid, h)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
    bool canFinish(vector<int>& piles, int k, int h) {
        long totalHours = 0;
        for (int p : piles) {
            totalHours += (p + k - 1) / k;
        }
        return totalHours <= h;
    }
};