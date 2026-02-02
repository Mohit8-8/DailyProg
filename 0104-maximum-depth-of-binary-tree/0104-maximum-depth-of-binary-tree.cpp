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

    void helper(TreeNode* root,int curr_depth,int &depth){

        if (!root) return;

        depth = max(curr_depth,depth);

        helper(root -> left,curr_depth+1,depth);
        helper(root-> right,curr_depth + 1,depth);
    }

    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        int depth = 0;
        helper(root,0,depth);

        return depth+1;
    }
};