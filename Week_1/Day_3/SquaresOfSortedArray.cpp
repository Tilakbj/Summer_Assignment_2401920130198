class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),x;
        vector<int>ans(n);
        for(int i=0;i<n;i++){ 
            x=nums[i]*nums[i];
            ans[i]=x;
        }
       sort(ans.begin(),ans.end());
       return ans;
    }
};