class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime,
                      vector<int>& profit) {
        int n = startTime.size();

        vector<vector<int>> jobs;
        for (int i = 0; i < n; i++) {
            jobs.push_back({startTime[i], endTime[i], profit[i]});
        }
        sort(jobs.begin(), jobs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        vector<int> dp(n);
        dp[0] = jobs[0][2];

        for (int i = 1; i < n; i++) {
            int take = jobs[i][2];
            int l = 0, r = i - 1;
            int last = -1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (jobs[mid][1] <= jobs[i][0]) {
                    last = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            if (last != -1)
                take += dp[last];

            dp[i] = max(dp[i - 1], take);
        }

        return dp[n - 1];
    }
};
