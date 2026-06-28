class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
       
        queue<TreeNode*>q;
         bool ok =true;
        q.push(root);
        while(!q.empty()){ 
            int n=q.size();
             vector<int>ans;
             ok=!ok; //ok hr level ke baad toggle krna
             for(int i=0;i<n;i++){
                TreeNode* sub=q.front();
                q.pop();
                ans.push_back(sub->val);
                if(sub->left)
                q.push(sub->left);
                if(sub->right)
                q.push(sub->right);
               
             }
             if(ok){
             reverse(ans.begin(),ans.end());
             res.push_back(ans);}
             else res.push_back(ans);
        }
        return res;
    }
};