class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                       greater<tuple<int, int, int>>>
            minHeap;
        int currMax = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            minHeap.push({nums[i][0], i, 0});
            currMax = max(currMax, nums[i][0]);
        }
        int rangeStart = 0, rangeEnd = INT_MAX;
        while (true) {
            auto [val, listIdx, elemIdx] = minHeap.top();
            minHeap.pop();
            if (currMax - val < rangeEnd - rangeStart) {
                rangeStart = val;
                rangeEnd = currMax;
            }
            if (elemIdx + 1 == nums[listIdx].size())
                break;
            int nextVal = nums[listIdx][elemIdx + 1];
            minHeap.push({nextVal, listIdx, elemIdx + 1});
            currMax = max(currMax, nextVal);
        }
        return {rangeStart, rangeEnd};
    }
};