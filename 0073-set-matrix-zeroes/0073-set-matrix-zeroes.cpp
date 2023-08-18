class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m=matrix[0].size();
        int n=matrix.size();
        vector<int>x;
        vector<int>y;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0){x.push_back(i);y.push_back(j);}
            }
        }
        for(int i=0;i<x.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[x[i]][j]=0;
            }
        }
        for(int j=0;j<y.size();j++)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][y[j]]=0;
            }
        }
    }
};