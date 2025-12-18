class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for (int n : nums) {
            low = max(n, low);
            high += n;
        }
        int ans = high;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            int reqPartitions = countPartitions(nums, mid);
            if (reqPartitions > k)
                low = mid + 1;
            else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }

    int countPartitions(vector<int>& nums, long long maxAllowed) {
        int partitions = 1;
        long long currSum = 0;
        for (int n : nums) {
            if (currSum + n <= maxAllowed)
                currSum += n;
            else {
                partitions++;
                currSum = n;
            }
        }
        return partitions;
    }
};