class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        bool sign=0;
        int res=0;
        for(int i=1;i<prices.size();i++)
        {
            if(sign==0)
            {
                if(prices[i]>prices[i-1]){res-=prices[i-1];sign=1;}
            }
            else
            {
                if(prices[i]<prices[i-1]){res+=prices[i-1];sign=0;}
            }
        }
        if(sign==0)
            {
                return res;
            }
            else
            {
                return res+prices[prices.size()-1];
            }
    }
};