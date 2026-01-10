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
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
    void dfs(TreeNode* root, int target) {
        if (root == NULL)
            return;
        path.push_back(root->val);
        if (root->left == NULL && root->right == NULL && target == root->val)
            ans.push_back(path);
        dfs(root->left, target - root->val);
        dfs(root->right, target - root->val);
        path.pop_back();
    }
};
