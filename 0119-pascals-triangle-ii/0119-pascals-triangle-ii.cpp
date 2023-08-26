class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        int dp[34][34];
        for(int i=0;i<=rowIndex;i++)
        {
            dp[i][0]=1;
            dp[i][i]=1;
        }
        vector<int>v;
        v.push_back(1);
        if(rowIndex==0){return v;}
        for(int i=2;i<=rowIndex;i++)
        {
            for(int j=1;j<i;j++)
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                if(i==rowIndex){v.push_back(dp[i][j]);}
            }
        }
        v.push_back(1);
        return v;
    }
};