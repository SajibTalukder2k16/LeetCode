class Solution {
public:
    bool validParentheses(string str)
    {
        stack<char>st;
        int len = str.length();
        for(int i=0;i<len;i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
                st.push(str[i]);
            else
            {
                if(st.size()>0)
                {
                    char top_char = st.top();
                    if(str[i]==')' && top_char=='(')
                        st.pop();
                    else if(str[i]=='}' && top_char=='{')
                        st.pop();
                    else if(str[i]==']' && top_char=='[')
                        st.pop();
                    else
                        return false;
                }
                else
                    return false;
                
            }
        }
        if(st.size()==0)
            return true;
        return false;
    }
    bool isValid(string s) {
        if(validParentheses(s))
            return true;
        else
            return false;
    }
};
