/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;

        long long maxWidth = 0;
        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});

        while (!q.empty()) {
            int size = q.size();
            long long start = q.front().second;
            long long end = q.back().second;
            maxWidth = max(maxWidth, end - start + 1);

            while (size--) {
                auto [node, idx] = q.front();
                q.pop();

                long long offset = idx - start;

                if (node->left)
                    q.push({node->left, offset * 2});
                if (node->right)
                    q.push({node->right, offset * 2 + 1});
            }
        }

        return maxWidth;
    }
};