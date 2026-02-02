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
class Solution {
public:

    int height(TreeNode* root){
        if (!root) return 0;

        int leftHeight = height(root -> left);
        int rightHeight = height(root -> right);

        return 1 + max(leftHeight,rightHeight);
    }

    bool isHeightBalanced(TreeNode* root){

        if (!root) return true;

        int leftHeight= height(root -> left);
        int rightHeight = height(root -> right);

        if (abs(leftHeight - rightHeight) > 1) return false;

        return (isHeightBalanced(root -> left) && isHeightBalanced(root -> right));
    }

    bool isBalanced(TreeNode* root) {
        return isHeightBalanced(root);
    }
};