class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            int tmp=i;
            int cnt=0;
            while(tmp>0)
            {
                if(tmp%2==1){cnt++;}
                tmp/=2;
            }
            v.push_back(cnt);
        }
        return v;
    }
};