class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int max_profit=0;
        for(int i=1;i<n;i++)
        {
            max_profit=max(max_profit,prices[i]-prices[i-1]);
            if(prices[i-1]<prices[i]){prices[i]=prices[i-1];}
        }
        return max_profit;
    }
};