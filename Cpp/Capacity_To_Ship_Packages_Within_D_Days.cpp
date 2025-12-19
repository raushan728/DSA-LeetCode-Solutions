class Solution {
public:
    bool isPossible(std::vector<int>& weights, int D, int capacity) {
        int days_needed = 1;
        int current_weight = 0;

        for (int w : weights) {
            if (current_weight + w <= capacity) {
                current_weight += w;
            } else {
                days_needed++;
                current_weight = w;
            }
        }
        return days_needed <= D;
    }

    int shipWithinDays(std::vector<int>& weights, int D) {
        int low = 0;
        long long high = 0;

        for (int w : weights) {
            low = std::max(low, w);
            high += w;
        }

        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(weights, D, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};