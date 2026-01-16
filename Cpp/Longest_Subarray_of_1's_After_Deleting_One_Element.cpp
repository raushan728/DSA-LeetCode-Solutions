class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l = 0, zero = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                zero++;
            while (zero > 1) {
                if (nums[l] == 0)
                    zero--;
                l++;
            }
            ans = max(ans, i - l);
        }
        return ans;
    }
};
