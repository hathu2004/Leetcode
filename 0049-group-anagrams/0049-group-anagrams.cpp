class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
       string org[strs.size()];
       for(auto i=0;i<strs.size();i++) 
       {
          org[i]=strs[i];
          sort(strs[i].begin(),strs[i].end());
       }
       vector<vector<string>>group_v;
       for(auto i=0;i<strs.size();i++) 
       {
          vector<string>v;
          if(strs[i]!="null")
          {
             v.push_back(org[i]);
          }
          else{continue;}
          for(auto t=i+1;t<strs.size();t++)
          {
             if(strs[t]==strs[i]){v.push_back(org[t]);strs[t]="null";}
          }
          strs[i]="null";
          group_v.push_back(v);
       }
       return group_v;
    }
};