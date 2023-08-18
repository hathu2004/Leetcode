class Solution {
public:
    bool stop=0;
    int a[10];
    int sum=0;
    int subsum[10];
    void khoi_tao(int n)
    {
        for(int i=1;i<=n;i++)
        {
            a[i]=0;
            subsum[i]=0;
        }
    }
    void sinh(int n)
    {
        int i=n;
        sum=0;
        subsum[0]=1;
        while(subsum[i]==i)
        {
            i--;
            for(int j=i+1;j<=n;j++){a[j]=0;}
        }
        for(int j=1;j<=n;j++){subsum[j]=0;}
        if(i==0){stop=1;}
        else 
        {
            a[i]++;
            for(int j=1;j<=n;j++)
        {
            sum+=a[j];
            subsum[j]=sum;
        }
        }     
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>result;
        khoi_tao(n-1);
        do
        {
           string s;
           vector<char>v;
           a[n]=n-sum;
           for(int j=1;j<=n;j++)
           {
                v.push_back('(');
                if(a[j]==0){continue;}
                else
                {
                    for(int t=1;t<=a[j];t++){v.push_back(')');}
                }
           }
           for(int j=0;j<v.size();j++){s+=v[j];}
           result.push_back(s);
           sinh(n-1);
        }
        while(stop==0);
        return result;
    }
};