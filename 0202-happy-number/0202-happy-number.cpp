class Solution {
public:
    bool isHappy(int n) 
    {
        int t=50;
        while(t--)
        {
            int res=0;
            while(n>0)
            {
                res+=(n%10)*(n%10);
                n/=10;
            }
            n=res;
        }
        if(n==1){return true;}
        else{return false;}
    }
};