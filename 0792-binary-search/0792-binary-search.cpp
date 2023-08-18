class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int l=0,r=nums.size()-1,m=(l+r)/2;
        while(l<=r)
        {
            if(target<nums[m]){r=m-1;m=(l+r)/2;}
            else if(target>nums[m]){l=m+1;m=(l+r)/2;}
            else{return m;}
        }
        return -1;
    }
};