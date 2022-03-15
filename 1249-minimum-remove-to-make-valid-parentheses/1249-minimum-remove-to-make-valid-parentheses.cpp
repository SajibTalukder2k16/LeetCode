class Solution {
public:
    vector<int> validParentheses(string str,int len)
    {
        vector<int>vec;
        stack<char>st;
        stack<int>position;
        for(int i=0;i<len;i++)
        {
            if(str[i]=='('){
                st.push(str[i]);
                position.push(i);
            }
                
            else if(str[i]==')')
            {
                if(st.size()>0)
                {
                    char top_char = st.top();
                    int idx=position.top();
                    if(str[i]==')' && top_char=='('){
                        vec.push_back(idx);
                        vec.push_back(i);
                    }
                    st.pop();
                    position.pop();
                }
                
            }
        }
        return vec;
    }
    string minRemoveToMakeValid(string s) {
        vector<int>vec;
        int len = s.length();
        vec=validParentheses(s,len);
        int sz=vec.size();
        sort(vec.begin(),vec.end());
        string str="";
        int j=0;
        for(int i=0;i<len;i++){
            if(s[i]=='(' || s[i]==')'){
                if(j==sz)
                    continue;
                if(i==vec[j]){
                    str+=s[i];
                    j++;
                }
            }
            else{
                str+=s[i];
            }
        }
        return str;
    }
};