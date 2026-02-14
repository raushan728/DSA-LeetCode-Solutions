class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        if (n < 2)
            return 0;
        vector<int> len;
        int curr = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curr++;
            } else {
                len.push_back(curr);
                curr = 1;
            }
        }
        len.push_back(curr);

        int ans = 0;
        for (int i = 0; i < len.size(); i++) {
            ans = max(ans, len[i] / 2);
            if (i > 0) {
                ans = max(ans, min(len[i], len[i - 1]));
            }
        }
        return ans;
    }
};