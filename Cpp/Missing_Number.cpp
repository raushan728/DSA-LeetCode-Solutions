class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int acSum = 0;
        int exSum = n * (n + 1) / 2;
        for (int val : nums)
            acSum += val;
        return exSum - acSum;
    }
};