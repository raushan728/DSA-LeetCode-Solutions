class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {
        vector<vector<pair<int, int>>> graph(n);

        for (auto& f : flights) {
            int u = f[0];
            int v = f[1];
            int price = f[2];
            graph[u].push_back({v, price});
        }
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>>
            pq;
        pq.push({0, src, 0});
        vector<vector<int>> dist(n, vector<int>(k + 2, INT_MAX));
        dist[src][0] = 0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();

            int cost = top[0];
            int city = top[1];
            int stops = top[2];
            if (city == dst) {
                return cost;
            }
            if (stops > k)
                continue;
            for (auto& nbr : graph[city]) {
                int nextCity = nbr.first;
                int price = nbr.second;
                int newCost = cost + price;
                if (newCost < dist[nextCity][stops + 1]) {
                    dist[nextCity][stops + 1] = newCost;
                    pq.push({newCost, nextCity, stops + 1});
                }
            }
        }
        return -1;
    }
};