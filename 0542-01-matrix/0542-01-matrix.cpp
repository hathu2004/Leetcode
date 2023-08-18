class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0){q.emplace(i,j);}
                else{mat[i][j]=-1;}
            }
        }
        while(!q.empty())
        {
            auto[i,j]=q.front();
            q.pop();
            int dx[4]={1,0,-1,0};
            int dy[4]={0,-1,0,1};
            for(int k=0;k<4;k++)
            {
                i+=dx[k];
                j+=dy[k];
                if(i<0||i==n||j<0||j==m||mat[i][j]!=-1)
                {
                    i-=dx[k];
                    j-=dy[k];
                    continue;
                }
                else
                {
                    mat[i][j]=mat[i-dx[k]][j-dy[k]]+1;
                    q.emplace(i,j);
                    i-=dx[k];
                    j-=dy[k];
                }
            }
        }
        return mat;
    }
};
