class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int i = 1;
        while (ans.size() + 1 < n) {
            ans.push_back(i);
            ans.push_back(-i);
            i++;
        }
        if (ans.size() < n)
            ans.push_back(0);
        return ans;
    }
};
