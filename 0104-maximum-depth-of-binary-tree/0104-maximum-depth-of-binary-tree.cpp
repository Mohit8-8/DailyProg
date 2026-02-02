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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;

        int height = 0;
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){

            int level_size = q.size();

            for(int i = 0;i < level_size;i++){

                TreeNode* frontNode = q.front();q.pop();

                if (frontNode -> left) q.push(frontNode -> left);
                if (frontNode -> right) q.push(frontNode -> right);

            }

            height++;
        }

        return height;
    }
};