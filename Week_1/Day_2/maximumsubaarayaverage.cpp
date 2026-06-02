class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long windowSum = 0;

        for (int i = 0; i < k; i++)
            windowSum += nums[i];

        long long bestSum = windowSum;

        for (int right = k; right < nums.size(); right++) {
            windowSum += nums[right];
            windowSum -= nums[right - k];

            bestSum = max(bestSum, windowSum);
        }

        return (double)bestSum / k;
    }
};