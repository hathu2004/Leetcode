class Solution {
public:
    bool isPalindrome(string s)
    {
    vector<char>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
            v.push_back(s[i]);
        }
        else if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z'))
        {
            v.push_back(s[i]);
        }
    }
    int l=0,r=v.size()-1;
    while(l<=r)
    {
      if(v[l]==v[r])
      {
        l++;
        r--;
      }
      else
      {
        return false;
      }
    }
    return true;
    }
};