class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
           v.push_back(word);
        }
        unordered_map<char,string>mp1;
        unordered_map<string,char>mp2;
        if(pattern.length()!=v.size()){return false;}
        else
        {
            for(int i=0;i<v.size();i++)
            {
                mp1[pattern[i]]=v[i];
                mp2[v[i]]=pattern[i];
            }
        }
        for(int i=0;i<v.size();i++)
            {
                if(mp1[pattern[i]]!=v[i]||mp2[v[i]]!=pattern[i]){return false;}
            }
        return true;
    }
};