class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n);
        unordered_map<int, int> full;
        set<int> zeros;

        for (int i = 0; i < n; ++i) {
            if (rains[i] == 0) {
                zeros.insert(i);
                ans[i] = 1;
            } else {
                int lake = rains[i];
                if (full.count(lake)) {
                    int lastRainDay = full[lake];
                    auto it = zeros.upper_bound(lastRainDay);

                    if (it == zeros.end()) {
                        return {};
                    }
                    int dryDay = *it;
                    ans[dryDay] = lake;

                    zeros.erase(it);
                }
                full[lake] = i;
                ans[i] = -1;
            }
        }

        return ans;
    }
};