class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int>num1_set(nums1.begin(),nums1.end());
        set<int>num2_set(nums2.begin(),nums2.end());
        vector<int>v;
        for(int x : num1_set)
        {
            for(int y : num2_set)
            {
                if(x==y){v.push_back(x);break;}
                else if(y>x){break;}
            }
        }
        return v;
    }
};