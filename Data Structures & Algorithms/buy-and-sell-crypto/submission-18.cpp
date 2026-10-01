class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minBuyPrice = prices[0];
        for (auto it: prices)
        {
            minBuyPrice=min(it, minBuyPrice);
            profit = max(profit, it-minBuyPrice);
        } 
        return profit;
    }
};
