class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();

        // sort by x asc, y desc
        sort(points.begin(), points.end(), [](auto& a, auto& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });

        // coordinate compress y
        vector<int> ys;
        for (auto& p : points)
            ys.push_back(p[1]);
        sort(ys.begin(), ys.end());
        ys.erase(unique(ys.begin(), ys.end()), ys.end());

        auto getY = [&](int y) {
            return lower_bound(ys.begin(), ys.end(), y) - ys.begin() + 1;
        };

        int m = ys.size();
        vector<int> bit(m + 1, 0);

        auto update = [&](int i, int v) {
            while (i <= m) {
                bit[i] += v;
                i += i & -i;
            }
        };

        auto query = [&](int i) {
            int s = 0;
            while (i > 0) {
                s += bit[i];
                i -= i & -i;
            }
            return s;
        };

        auto rangeQuery = [&](int l, int r) {
            if (l > r)
                return 0;
            return query(r) - query(l - 1);
        };

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            fill(bit.begin(), bit.end(), 0);
            int yi = points[i][1];
            int yiIdx = getY(yi);

            for (int j = i + 1; j < n; j++) {
                int yj = points[j][1];
                if (yj > yi)
                    continue;

                int yjIdx = getY(yj);
                if (rangeQuery(yjIdx, yiIdx) == 0) {
                    ans++;
                }
                update(yjIdx, 1);
            }
        }

        return ans;
    }
};