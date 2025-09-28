class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for (int num : nums)
            freqMap[num]++;
        vector<vector<int>> bucket(nums.size() + 1);
        for (auto const& [num, freq] : freqMap)
            bucket[freq].push_back(num);
        vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            if (!bucket[i].empty()) {
                for (int i : bucket[i])
                    result.push_back(i);
                if (result.size() == k)
                    return result;
            }
        }
        return result;
    }
};