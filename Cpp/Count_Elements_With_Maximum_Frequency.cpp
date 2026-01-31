class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums)
            freq[x]++;
        int max = 0;
        for (auto x : freq) {
            if (x.second > max)
                max = x.second;
        }
        int ans = 0;
        for (auto x : freq) {
            if (x.second == max)
                ans += x.second;
        }
        return ans;
    }
};