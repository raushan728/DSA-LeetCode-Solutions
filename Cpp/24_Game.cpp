class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> arr;
        for (int x : cards)
            arr.push_back((double)x);
        return solve(arr);
    }
    bool solve(vector<double>& nums) {
        if (nums.size() == 1) {
            return abs(nums[0] - 24.0) < 0.001;
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j)
                    continue;

                vector<double> nextNums;
                for (int k = 0; k < nums.size(); k++) {
                    if (k != i && k != j)
                        nextNums.push_back(nums[k]);
                }
                double a = nums[i];
                double b = nums[j];
                vector<double> results = {a + b, a - b, b - a, a * b};

                if (abs(b) > 0.001)
                    results.push_back(a / b);
                if (abs(a) > 0.001)
                    results.push_back(b / a);
                for (double res : results) {
                    nextNums.push_back(res);

                    if (solve(nextNums))
                        return true;

                    nextNums.pop_back();
                }
            }
        }
        return false;
    }
};
