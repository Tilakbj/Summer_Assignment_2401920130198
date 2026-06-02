class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writePos = 1;
        int n = nums.size();

        if (n == 0) return 0;

        for (int readPos = 1; readPos < n; readPos++) {
            if (nums[readPos] != nums[readPos - 1]) {
                nums[writePos] = nums[readPos];
                writePos++;
            }
        }

        return writePos;
    }
};