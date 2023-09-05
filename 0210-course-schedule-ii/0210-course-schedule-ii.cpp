class Solution {
public:
    vector<int>adj[2001];
    int in[2001];
    vector<int>topo;
    void input(vector<vector<int>>&v)
    {
        int m=v.size();
        for(int i=0;i<m;i++)
        {
           adj[v[i][0]].push_back(v[i][1]);
           in[v[i][1]]++;
        }
    }
    void kahn(int n)
    {
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0){q.push(i);}
        }
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            topo.push_back(u);
            for(int x: adj[u])
            {
                in[x]--;
                if(in[x]==0){q.push(x);}
            }
        }
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<int>v0;
        input(prerequisites);
        kahn(numCourses);
        if(topo.size()==numCourses){reverse(topo.begin(),topo.end());return topo;}
        else{return v0;}
    }
};