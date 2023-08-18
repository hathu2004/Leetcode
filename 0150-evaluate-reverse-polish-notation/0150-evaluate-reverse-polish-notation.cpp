class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int>st;
        for(int i=0;i<tokens.size();i++ )
        {
             if(tokens[i]=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=a+b;
                st.push(res);
            }
            else if(tokens[i]=="-")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b-a;
                st.push(res);
            }
            else if(tokens[i]=="*")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=a*b;
                st.push(res);
            }
            else if(tokens[i]=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res=b/a;
                st.push(res);
            }
            else
            {
                int ans=0, sign=1;
                for(int j=0;j<tokens[i].length();j++)
                {
                    if(tokens[i][j]=='-'){sign=-1;continue;}
                    else
                    {
                        int x=tokens[i][j]-'0';
                        ans=x+10*ans;
                    }
                }
                st.push(ans*sign);
            }
        }
        return st.top();
    }
};