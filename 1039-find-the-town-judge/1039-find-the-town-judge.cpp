class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        if(n==1){return 1;}
        else if(trust.size()==0){return -1;}
        vector<int>adj[n+1];
        bool check[n+1];
        memset(check,false,sizeof(check));
        int m=trust.size();
        for(int i=0;i<m;i++)
        {
            adj[trust[i][1]].push_back(trust[i][0]);
            check[trust[i][0]]=true;
        }
        for(int i=1;i<=n;i++)
        {
            if(adj[i].size()==n-1&&check[i]==false){return i;}
        }
        return -1;
    }
};