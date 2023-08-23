class Solution {
public:
    string reorganizeString(string s) 
    {
        int sign=0;
        char key;
        int n=s.length();
        multiset<char>se(s.begin(),s.end());
        queue<char>q1,q2;
        string res="";
        for(char i='a';i<='z';i++)
        {
            if(se.count(i)>(n+1)/2){return res;}
            else if(se.count(i)==n/2+1){key=i;sign=1;}
        }
        int cnt=0;
        if(sign==1)
        {
            res+=key;
            for(char x:se)
            {
                if(x==key){continue;}
                else{res+=x;res+=key;}
            }
        }
        else
        {
        for(char x: se)
        {
            if(cnt<(n+1)/2)
            {
                q1.push(x);
                cnt++;
            }
            else{q2.push(x);}
        }
        while (!q1.empty()) 
        {
            res += q1.front();
            q1.pop();
            if (!q2.empty()) 
            {
               res += q2.front();
               q2.pop();
            }
        }
        }
        return res;
    }
};