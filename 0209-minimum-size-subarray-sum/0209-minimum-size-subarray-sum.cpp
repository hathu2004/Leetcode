class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int res=INT_MAX;
        int cur=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            cur+=nums[i];
            if(cur>=target)
            {
                while(cur>=target&&j<=i)
                {
                     cur-=nums[j];
                     j++;
                }
                res=min(res,i-j+2);
            }
        }
        if(res==INT_MAX){return 0;}
        else{return res;}
    }
};