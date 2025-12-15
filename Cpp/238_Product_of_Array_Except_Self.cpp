class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int pref = 1, suff = 1;
        for (int i = 0; i < n; i++) {
            ans[i] *= pref;
            pref *= nums[i];
            ans[n - 1 - i] *= suff;
            suff *= nums[n - 1 - i];
        }
        return ans;
    }
};