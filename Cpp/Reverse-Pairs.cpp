class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }

    int mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r)
            return 0;
        int m = l + (r - l) / 2;
        int cnt = mergeSort(nums, l, m) + mergeSort(nums, m + 1, r);
        int j = m + 1;
        for (int i = l; i <= m; i++) {
            while (j <= r && (long long)nums[i] > 2LL * nums[j])
                j++;
            cnt += j - (m + 1);
        }
        inplace_merge(nums.begin() + l, nums.begin() + m + 1,
                      nums.begin() + r + 1);
        return cnt;
    }
};
