class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        ans.push_back(words[0]);

        for (int i = 1; i < words.size(); i++) {
            string curr_word = words[i];
            string prev_word = ans.back();
            sort(curr_word.begin(), curr_word.end());
            sort(prev_word.begin(), prev_word.end());
            if (curr_word != prev_word) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};