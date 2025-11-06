class Solution {
public:
    void getAllSubset(vector<int>& nums, vector<int>& ans, int start,
                      vector<vector<int>>& allSubset) {
        allSubset.push_back(ans);

        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) continue;

            ans.push_back(nums[i]);
            getAllSubset(nums, ans, i + 1, allSubset);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allSubset;
        vector<int> ans;
        getAllSubset(nums, ans, 0, allSubset);
        return allSubset;
    }
};
