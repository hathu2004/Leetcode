class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int dp[30][30];
        for(int i=0;i<numRows;i++)
        {
            dp[i][0]=1;
            dp[i][i]=1;
        }
        vector<vector<int>>res;
        res.push_back({1});
        if(numRows==1){return res;}
        res.push_back({1,1});
        for(int i=2;i<numRows;i++)
        {
            vector<int>v;
            v.push_back(1);
            for(int j=1;j<i;j++)
            {
                     dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                     v.push_back(dp[i][j]);
            }
            v.push_back(1);
            res.push_back(v);
        }
        return res;
    }
};