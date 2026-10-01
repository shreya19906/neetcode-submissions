class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
    //     vector<int> maxR(n,0), minL(n,0);
    //     minL[0] = prices[0];
    //     maxR[n-1] = prices[n-1];
    //     for(int i=1; i < n; i++) minL[i] = min(minL[i-1], prices[i]);
    //     for(int i=n-2; i >= 0; i--) maxR[i] = max(maxR[i+1], prices[i]);
    //     int max = 0;
    //     for(int i =0;i<n;i++)
    //      {
    //         int profit = maxR[i] - minL[i];
    //         if(profit > max) max=profit; 
    //      }
    // return max;
    // int left = 0;
    // int right = n-1;
    // int minL = prices[0];
    // int maxR = prices[n-1];
    // int profit = maxR - minL;
    //   while(left < right) {
    //     if(right-1 > left && maxR < prices[right-1]) {maxR = prices[right-1]; }
    //     if(left + 1 < right && minL > prices[left+1]) {minL = prices[left+1];}
    //     profit = max(profit, maxR - minL);
    //     if(left >= right) break ;
    //         left++;
    //         right--;
    //   }
    //   return profit > 0 ?  profit : 0;
    int right = 0;
    int minPrice = prices[0];
    int profit = 0;
    while( right < n) {
        
        profit = max(prices[right] - minPrice, profit);
        minPrice = min(minPrice,prices[right]);
        right++;
    }
    return profit;
    }
};
