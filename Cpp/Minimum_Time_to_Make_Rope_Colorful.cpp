class Solution {
public:
    int minCost(string colors, vector<int>& needed) {
        long long totalTime = 0;
        int maxTime = needed[0];
        for (int i = 1; i < colors.size(); i++) {
            if (colors[i] == colors[i - 1]) {
                totalTime += min(maxTime, needed[i]);
                maxTime = max(maxTime, needed[i]);
            } else {
                maxTime = needed[i];
            }
        }
        return totalTime;
    }
};