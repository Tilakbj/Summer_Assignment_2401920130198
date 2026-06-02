class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSell = prices.back();
        int best = 0;

        for (int i = prices.size() - 2; i >= 0; i--) {
            best = max(best, maxSell - prices[i]);
            maxSell = max(maxSell, prices[i]);
        }

        return best;
    }
};