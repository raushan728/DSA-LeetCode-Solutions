class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int> st;
        int ops = 0;

        for (int num : nums) {
            if (num == 0) {
                while (!st.empty())
                    st.pop();
                continue;
            }

            while (!st.empty() && st.top() > num) {
                st.pop();
            }

            if (st.empty() || st.top() < num) {
                st.push(num);
                ops++;
            }
        }

        return ops;
    }
};