class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root)  return res;        
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
             vector<int>ans;
             int n=q.size();
             for(int i=0;i<n;i++){ //Here not directly use q.size() bcz it 
                TreeNode* sub=q.front(); //continuosly changes
                q.pop();
                ans.push_back(sub->val);
                if(sub->left)
                q.push(sub->left);
                if(sub->right)
                q.push(sub->right);
             }
            res.push_back(ans);
        }
         return res;
    }
};