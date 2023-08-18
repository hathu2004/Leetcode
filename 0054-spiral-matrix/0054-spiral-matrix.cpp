class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>v;
        int n=matrix.size();
        int m=matrix[0].size();
        int count=m*n;
        for(int t=0;t<max(m,n);t++)
        {
            for(int j=t;j<=m-1-t;j++){v.push_back(matrix[t][j]);}
            count=count-(m-2*t);
            if(count==0){break;}
            for(int i=t+1;i<=n-1-t;i++){v.push_back(matrix[i][m-1-t]);}
            count=count-(n-2*t-1);
            if(count==0){break;}
            for(int j=m-2-t;j>=t;j--){v.push_back(matrix[n-1-t][j]);}
            count=count-(m-2*t-1);
            if(count==0){break;}
            for(int i=n-2-t;i>t;i--){v.push_back(matrix[i][t]);}
            count=count-(n-2*t-2);
            if(count==0){break;}
        }
        return v;
    }
};