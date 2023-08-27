class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==0)
            {
                int sign=0;
                for(int j=0;j<i;j++)
                {
                    if(nums[j]>(i-j)){sign=1;break;}
                }
                if(sign==0){return false;}
            }
            else {continue;}
        }
        return true;
    }
};