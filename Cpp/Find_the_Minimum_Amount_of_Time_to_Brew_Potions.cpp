class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size();
        int m = mana.size();

        vector<long long> pref(n);
        pref[0] = skill[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + skill[i];

        vector<long long> ans(n, 0); 

        for (int j = 0; j < m; j++) {
            long long start = 0;

            for (int i = 0; i < n; i++) {
                long long reSt = ans[i] - mana[j] * (i == 0 ? 0 : pref[i - 1]);
                start = max(start, reSt);
            }

            for (int i = 0; i < n; i++) {
                long long st = start + mana[j] * (i == 0 ? 0 : pref[i - 1]);
                ans[i] = st + 1LL * skill[i] * mana[j];
            }
        }

        return ans[n - 1];
    }
};