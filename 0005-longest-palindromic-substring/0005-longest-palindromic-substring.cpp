class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n=s.length();
        if(n==1){return s;}
        bool dp[1001][1001];
        for(int i=0;i<n;i++){dp[i][i]=true;}
        int max=1;
        int index_x=0;
        string sub;
        for(int len=2;len<=n;len++)
        {
            for(int i=0;i<=n-len;i++)
            {
               if(len==2)
               {
                   if(s[i]==s[i+len-1]){dp[i][i+len-1]=true;}
                   else{dp[i][i+len-1]=false;}
               }
               else
               {
                   if(s[i]==s[i+len-1]&&dp[i+1][i+len-2]==true){dp[i][i+len-1]=true;}
                   else{dp[i][i+len-1]=false;}
               }
               if(dp[i][i+len-1]==true&&len>max){index_x=i;max=len;}
            }
           sub=s.substr(index_x,max);
        }
        return sub;
    }
};