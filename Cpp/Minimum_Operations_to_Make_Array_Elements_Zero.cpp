class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long ans = 0;

        for (auto& q : queries) {
            int l = q[0], r = q[1];
            long long ts = 0;

            int st = 1;
            for (int k = 1; st <= r; k++) {
                int end = st * 4 - 1;
                long left = max(l, st);
                long rt = min(r, end);

                if (left <= rt) {
                    ts += (rt - left + 1) * k;
                }
                st *= 4;
            }
            ans += (ts + 1) / 2;
        }
        return ans;
    }
};