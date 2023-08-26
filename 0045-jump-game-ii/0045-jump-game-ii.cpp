class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==0){return 0;}
        else if(n==1){return 0;}
        int dp[n+1];
        memset(dp,1,sizeof(dp));
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<n;i++)
        {
           for(int j=0;j<i;j++)
           {
               if(nums[j]>=(i-j)){dp[i]=min(dp[i],dp[j]+1);}
           }
        }
        return dp[n-1];
    }
};