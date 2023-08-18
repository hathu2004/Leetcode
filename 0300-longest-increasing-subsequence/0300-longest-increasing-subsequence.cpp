class Solution {
public:
    int lengthOfLIS(vector<int>& nums)
    {
        vector<int>length_nums(nums.size(),1);
        int length_max=1;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    length_nums[i]=max(length_nums[i],length_nums[j]+1);
                    length_max=max(length_max,length_nums[i]);
                }
            }
        }
        return length_max;
    }
};