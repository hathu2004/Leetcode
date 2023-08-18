class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i,j;
        for(i=0;i<nums.size()-1;i++)
        {
                int stop=0;
                for(j=i+1;j<nums.size();j++)
                {
                   if(nums[i]+nums[j]==target){stop=1;break;}
                }
                if(stop==1){break;}
        }
        return {i,j};
    }
};