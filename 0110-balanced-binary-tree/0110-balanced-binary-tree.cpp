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

    // int height(TreeNode* root){
    //     if (!root) return 0;

    //     int leftHeight = height(root -> left);
    //     int rightHeight = height(root -> right);

    //     return 1 + max(leftHeight,rightHeight);
    // }

    pair<bool,int> isHeightBalanced(TreeNode* root){

        if (root == nullptr) return make_pair(true,0);
        
        auto [isLeftBalanced,leftHeight] = isHeightBalanced(root -> left);
        auto [isRightBalanced,rightHeight] = isHeightBalanced(root -> right);

        if (!isLeftBalanced || !isRightBalanced) return {false,1 + max(leftHeight,rightHeight)};
        if (abs(leftHeight - rightHeight) > 1) return {false,1 + max(leftHeight,rightHeight)};

        return {true,1 + max(leftHeight,rightHeight)};
    }

    bool isBalanced(TreeNode* root) {
        return isHeightBalanced(root).first;
    }
};