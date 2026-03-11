class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size() - 2;
        int xorAll = 0;
        for (int i = 0; i < nums.size(); i++) {
            xorAll ^= nums[i];
        }
        for (int i = 0; i < n; i++) {
            xorAll ^= i;
        }
        int setBit = xorAll & -xorAll;
        int x = 0, y = 0;

        for (int num : nums) {
            if (num & setBit)
                x ^= num;
            else
                y ^= num;
        }

        for (int i = 0; i < n; i++) {
            if (i & setBit)
                x ^= i;
            else
                y ^= i;
        }

        return {x, y};
    }
};