class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int pref = 0;
        int minPref = 0;
        int ans = INT_MIN;

        for (int x : nums) {
            pref += x;

            ans = max(ans, pref - minPref);

            minPref = min(minPref, pref);
        }

        return ans;
    }
};