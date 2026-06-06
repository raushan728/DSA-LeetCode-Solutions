class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        int n = events.size();
        vector<int> suffix(n);
        suffix[n - 1] = events[n - 1][2];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], events[i][2]);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int endTime = events[i][1];
            int value = events[i][2];
            ans = max(ans, value);
            int low = i + 1;
            int high = n - 1;
            int nextIdx = n;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (events[mid][0] > endTime) {
                    high = mid - 1;
                    nextIdx = mid;
                } else {
                    low = mid + 1;
                }
            }
            if (nextIdx < n)
                ans = max(ans, value + suffix[nextIdx]);
        }
        return ans;
    }
};
