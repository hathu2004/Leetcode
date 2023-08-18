class Solution {
public:
   bool binary_search(const vector<int>&v,int target)
    {
       int l=0,r=v.size()-1;
       while(l<=r)
       {
          int m=(l+r)/2;
          if(target>v[m]){l=m+1;}
          else if(target<v[m]){r=m-1;}
          else {return true;}
       }
       return false;
    }
bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int y=matrix[i][j];
                v.push_back(y);
            }
        }
        return binary_search(v,target);
    }
};