class Solution {
public:
    long getLcm(long a, long b) { return (a * b) / gcd(a, b); }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> ans;
        for (int x : nums) {
            long curr = x;
            while (!ans.empty()) {
                long top = ans.back();
                if (gcd(curr, top) > 1) {
                    ans.pop_back();
                    curr = getLcm(top, curr);
                } else
                    break;
            }
            ans.push_back((int)curr);
        }
        return ans;
    }
};