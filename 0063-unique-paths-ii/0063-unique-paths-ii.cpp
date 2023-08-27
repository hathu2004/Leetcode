class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int m=obstacleGrid[0].size();
        int n=obstacleGrid.size();
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        if(obstacleGrid[0][0]==1){return 0;}
        else{dp[0][0]=1;}
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0&&j==0){continue;}
                else if(i==0&&obstacleGrid[i][j]==0){dp[i][j]=dp[i][j-1];}
                else if(j==0&&obstacleGrid[i][j]==0){dp[i][j]=dp[i-1][j];}
                else if(obstacleGrid[i][j]==0){dp[i][j]=dp[i][j-1]+dp[i-1][j];}
            }
        }
        return dp[n-1][m-1];
    }
};