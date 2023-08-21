class Solution {
public:
    
    int maximalNetworkRank(int n, vector<vector<int>>& roads) 
    {
        int cnt[n];
        int tmp[n];
        int chung[n][n];
        vector<int>v;
        memset(cnt,0,sizeof(cnt));
        memset(tmp,0,sizeof(tmp));
        memset(chung,0,sizeof(chung));
        for(int i=0;i<roads.size();i++)
        {
            cnt[roads[i][0]]++;
            cnt[roads[i][1]]++;
            tmp[roads[i][0]]++;
            tmp[roads[i][1]]++;
            chung[roads[i][0]][roads[i][1]]++;
            chung[roads[i][1]][roads[i][0]]++;
        }
        sort(tmp,tmp+n,greater<int>());
        for(int i=0;i<n;i++)
        {
           if(cnt[i]==tmp[0]){v.push_back(i);}
        }
        int min_res=5;
        if(v.size()>=2)
        {
            for(int i=0;i<v.size()-1;i++)
            {
                for(int j=i+1;j<v.size();j++)
                {
                   min_res=min(min_res,chung[v[i]][v[j]]);
                }
            }
            return 2*tmp[0]-min_res;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(cnt[i]==tmp[1]){min_res=min(min_res,chung[v[0]][i]);}
            }
            return tmp[0]+tmp[1]-min_res;
        }
    }
};