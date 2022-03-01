class Solution {
public:
    void reverseString(vector<char>& s) {
        int sz=s.size();
        int i=0,j=sz-1;
        char ch;
        while(i<=j){
            ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++,j--;
        }
        
    }
};