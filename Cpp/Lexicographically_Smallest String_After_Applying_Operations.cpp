class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        unordered_set<string> done;
        queue<string> q;
        done.insert(s);
        q.push(s);
        string ans = s;
        while (!q.empty()) {
            string curr = q.front();
            q.pop();
            if (curr < ans) {
                ans = curr;
            }
            string added = curr;
            for (int i = 1; i < added.size(); i += 2) {
                int digit = added[i] - '0';
                digit = (digit + a) % 10;
                added[i] = digit + '0';
            }
            if (!done.count(added)) {
                done.insert(added);
                q.push(added);
            }
            int n = curr.size();
            string rotated = curr.substr(n - b) + curr.substr(0, n - b);
            if (!done.count(rotated)) {
                done.insert(rotated);
                q.push(rotated);
            }
        }
        return ans;
    }
};