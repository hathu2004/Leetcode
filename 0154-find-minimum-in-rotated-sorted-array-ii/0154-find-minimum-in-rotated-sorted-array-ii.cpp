class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int l=0,r=nums.size()-1;
        int m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[l]<=nums[m]&&nums[l]<nums[r]){return nums[l];}
            else if(nums[l]<nums[m])
            {
                l=m+1;
            }
            else if(nums[l]==nums[m])
            {
                int sign=0;
                for(int i=l+1;i<m;i++)
                {
                    if(nums[i]!=nums[l]){sign=1;break;}
                }
                if(sign==1){r=m-1;}
                else{l=m+1;}
            }
            else
            {
                r=m;
            }
        }
        return nums[m];
    }
};