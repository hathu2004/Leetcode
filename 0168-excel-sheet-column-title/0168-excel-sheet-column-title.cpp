class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string s="";
        while(columnNumber)
        {
           columnNumber--;
           char c;
           c=columnNumber%26+'A';
           s+=c;
           columnNumber=columnNumber/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};