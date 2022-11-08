class Solution {
public:
    string makeGood(string s) {
        int len = s.length();
        string output = "";
        stack<char>st;
        for(int i=0;i<len;i++){
            if(!st.empty() && abs(st.top()-s[i])==32) 
                st.pop();
            else
                st.push(s[i]);
        }
        while(!st.empty()){
            output+=st.top();
            st.pop();
        }
        reverse(output.begin(),output.end());
        return output;
    }
};