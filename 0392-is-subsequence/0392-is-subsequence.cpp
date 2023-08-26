class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int index=0;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=index;j<t.length();j++)
            {
                if(s[i]==t[j]){index=j+1;cnt++;break;}
            }
        }
        if(cnt==s.length()){return true;}
        else{return false;}
    }
};