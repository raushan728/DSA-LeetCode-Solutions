class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr;
        for (int i : nums) {
            if (arr.count(i)) {
                return true;
            }
            arr.insert(i);
        }
        return false;
    }
};