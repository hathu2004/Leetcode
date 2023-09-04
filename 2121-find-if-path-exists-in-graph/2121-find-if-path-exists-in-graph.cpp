class Solution {
public:
    vector<int>adj[200001];
    bool visited[200001];
    void input(vector<vector<int>>&edges)
    {
        int m=edges.size();
        for(int i=0;i<m;i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        memset(visited,false,sizeof(visited));
    }
    void dfs(int u)
    {
        visited[u]=true;
        for(int v : adj[u])
        {
            if(visited[v]==false){dfs(v);}
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        input(edges);
        dfs(source);
        return visited[destination];
    }
};