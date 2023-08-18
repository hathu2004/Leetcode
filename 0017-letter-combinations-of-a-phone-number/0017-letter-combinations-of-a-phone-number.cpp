class Solution {
public:
vector<string> res, phone_number={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string st,digits;
void Try(int i) 
{
    int key=digits[i]-'0'-2;
    for (char c : phone_number[key]) {
        st.push_back(c);
        if (i == digits.length() - 1) { res.push_back(st);} 
        else 
        {
            Try(i + 1);
        }
        st.pop_back();
    }
}

vector<string> letterCombinations(string digits) 
{
    if(!digits.length()){return {};}
    this->digits = digits;
    Try(0);
    return res;
}
};