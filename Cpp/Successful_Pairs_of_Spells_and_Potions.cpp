class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());

        vector<int> ans;
        int m = potions.size();
        for (int s : spells) {
            long long minPo = (success + s - 1) / s;
            auto it = lower_bound(potions.begin(), potions.end(), minPo);
            int cnt = potions.end() - it;
            ans.push_back(cnt);
        }
        return ans;
    }
};