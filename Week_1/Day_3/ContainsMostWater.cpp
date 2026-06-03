class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1,length=0,breadth=0,area=INT_MIN;
        while(l<r){
        length=r-l;
        breadth=min(height[l],height[r]);
        area=max(area,length*breadth);
        if(height[l]<=height[r])l++;
        else r--;
        }
        return area;
        
    }
};