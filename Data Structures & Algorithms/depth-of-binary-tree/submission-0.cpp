/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution{
public:
    int helper(TreeNode* root, int sum){
        if(!root) return sum;
        sum++;
        return max(helper(root->left, sum), helper(root->right, sum));
}

    int maxDepth(TreeNode* root) {
        return helper(root, 0);
    }
};
