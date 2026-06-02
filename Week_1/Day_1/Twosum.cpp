
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> pos;

        for (int idx = 0; idx < arr.size(); idx++) {
            int need = target - arr[idx];

            if (pos.count(need)) {
                return {pos[need], idx};
            }

            pos[arr[idx]] = idx;
        }

        return {};
    }
};