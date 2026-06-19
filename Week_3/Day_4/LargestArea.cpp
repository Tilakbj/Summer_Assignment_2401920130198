#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        std::vector<int> pse(n); // Prev Smaller Element indices
        std::vector<int> nse(n); // Next Smaller Element indices
        std::stack<int> st;

        // Step 1: Find Previous Smaller Element for every bar
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            // If no smaller element on left, boundary is effectively -1
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }

        // Clear stack for the next pass
        while (!st.empty()) st.pop();

        // Step 2: Find Next Smaller Element for every bar
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            // If no smaller element on right, boundary is effectively n
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        // Step 3: Calculate Max Area using the boundaries
        int max_area = 0;
        for (int i = 0; i < n; ++i) {
            int height = heights[i];
            int width = nse[i] - pse[i] - 1;
            max_area = std::max(max_area, height * width);
        }

        return max_area;
    }
};
