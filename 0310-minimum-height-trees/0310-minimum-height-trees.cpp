class Solution {
public:
    bool visited[20001];
    vector<int>adj[20001];
    int parent[20001];
    void dfs(int v)
    {
            visited[v]=true;
            for(auto x:adj[v])
            {
                if(visited[x]==false)
                {
                    parent[x]=v;
                    dfs(x);
                }
            }
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) 
    {
        // bool visited[n];
        // vector<int>adj[n];
         vector<int>v;
        if(n==1){v.push_back(0);return v;}
        int in[n];
        memset(in,0,sizeof(in));
        memset(visited,false,sizeof(visited));
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            in[edges[i][1]]++;
            in[edges[i][0]]++;
        }
        queue<int>q;
        vector<int>tmp;
        for(int i=0;i<n;i++)
        {
            if(in[i]==1){q.push(i);tmp.push_back(i);}
        }
        vector<int>topo;
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            topo.push_back(u);
            for(auto x:adj[u])
            {
                in[x]--;
                if(in[x]==1){q.push(x);}
            }
        }
        int max1=0,max2=0;
        dfs(topo[n-1]);
        for(auto x:tmp)
        {
            int cnt=0;
            while(x!=topo[n-1])
            {
               x=parent[x];
               cnt++;
            }
            max1=max(max1,cnt);
        }
        memset(visited,false,sizeof(visited));
        memset(parent,0,sizeof(parent));
        dfs(topo[n-2]);
        for(auto x:tmp)
        {
            int cnt=0;
            while(x!=topo[n-2])
            {
               x=parent[x];
               cnt++;
            }
            max2=max(max2,cnt);
        }
        if(max1==max2){v.push_back(topo[n-1]);v.push_back(topo[n-2]);}
        else {v.push_back(topo[n-1]);}
        return v;
    }
};