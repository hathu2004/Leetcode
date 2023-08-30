class Solution {
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        set<int>se;
        int cnt=0;
        for(int i=0;i<edges.size();i++)
        {
            se.insert(edges[i][0]);
            cnt++;
            if(cnt>se.size()){return edges[i][0];}
            se.insert(edges[i][1]);
            cnt++;
            if(cnt>se.size()){return edges[i][1];}
        }
        return 0;
    }
};