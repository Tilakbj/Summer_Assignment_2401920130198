class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return NULL;
       TreeNode* lefty=invertTree(root->left);
       TreeNode* righty=invertTree(root->right);
       root->left=righty;
       root->right=lefty;
       return root;
    }
};