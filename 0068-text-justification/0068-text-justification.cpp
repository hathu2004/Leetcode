class Solution {
public:
    string justify(string s, int space, int cnt)
    {
       stringstream ss(s);
       string tmp;
       string s1="";
       if(cnt==1)
       {
           s.pop_back();
           s1+=s;
           for(int i=0;i<space;i++)
           {
               s1+=" ";
           }
       }
       else
       {
       int a=space/(cnt-1);
       int b=space%(cnt-1);
       while(ss>>tmp)
       {
          s1+=tmp;
          for(int i=0;i<a;i++)
          {
              s1+=" ";
          }
          if(b>0){s1+=" ";b--;}
       }
       for(int i=0;i<a;i++)
       {
           s1.pop_back();
       }
       }
       return s1;
    }
    string left_justify(string s, int maxWidth)
    {
        s.pop_back();
        int n=maxWidth-s.length();
        for(int i=0;i<n;i++)
        {
            s+=" ";
        }
        return s;
    }
    vector<string> fullJustify(vector<string>& words, int maxWidth) 
    {
        vector<string>v;
        int n=words.size();
        int sum=0;
        int cnt=0;
        string s;
        for(int i=0;i<n;i++)
        {
           if(sum+words[i].length()>maxWidth)
           {
               string res=justify(s,maxWidth-sum+cnt,cnt);
               v.push_back(res);
               sum=words[i].length()+1;
               s=words[i];
               s+=" ";
               cnt=1;
           }
           else
           {
               sum+=(words[i].length()+1);
               s+=words[i];
               s+=" ";
               cnt++;
           }
        }
        string res=left_justify(s,maxWidth);
        v.push_back(res);
        return v;
    }
};