class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages,
                         vector<vector<int>>& friendships) {
        int p = languages.size();
        vector<unordered_set<int>> know(p);
        for (int i = 0; i < p; i++) {
            for (int lang : languages[i]) {
                know[i].insert(lang);
            }
        }
        unordered_set<int> help;
        for (auto& f : friendships) {
            int u = f[0] - 1;
            int v = f[1] - 1;
            bool ok = false;

            for (int lang : know[u]) {
                if (know[v].count(lang)) {
                    ok = true;
                    break;
                }
            }
            if (!ok) {
                help.insert(u);
                help.insert(v);
            }
        }

        if (help.empty())
            return 0;
        int ans = INT_MAX;
        for (int lang = 1; lang <= n; lang++) {
            int cnt = 0;
            for (int person : help) {
                if (!know[person].count(lang))
                    cnt++;
            }
            ans = min(ans, cnt);
        }
        return ans;
    }
};