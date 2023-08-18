class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int>set_nums(nums.begin(),nums.end());
    if(nums.size()==set_nums.size())
    {
       return false;
    }
    else
    {
        return true;
    }
}
};