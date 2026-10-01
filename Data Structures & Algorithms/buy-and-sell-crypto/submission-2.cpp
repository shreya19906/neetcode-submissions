class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxR(n,0), minL(n,0);
        minL[0] = prices[0];
        maxR[n-1] = prices[n-1];
        for(int i=1; i < n; i++) minL[i] = min(minL[i-1], prices[i]);
        for(int i=n-2; i >= 0; i--) maxR[i] = max(maxR[i+1], prices[i]);
        int max = 0;
        for(int i =0;i<n;i++)
         {
            int profit = maxR[i] - minL[i];
            if(profit > max) max=profit; 
         }
    return max;
        
    }
};
