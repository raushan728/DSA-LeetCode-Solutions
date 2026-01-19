class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {

        priority_queue<pair<double, pair<int, int>>> pq;
        for (auto& c : classes) {
            int p = c[0];
            int t = c[1];
            double g = (double)(p + 1) / (t + 1) - (double)p / t;
            pq.push({g, {p, t}});
        }
        while (extraStudents--) {
            auto top = pq.top();
            pq.pop();
            int p = top.second.first;
            int t = top.second.second;
            p++;
            t++;

            double g = (double)(p + 1) / (t + 1) - (double)p / t;
            pq.push({g, {p, t}});
        }
        double sum = 0.0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            sum += (double)top.second.first / top.second.second;
        }

        return sum / classes.size();
    }
};
