class Solution {
public:
    void reverseString(string& s,int i,int j) {
        char ch;
        while(i<=j){
            ch=s[i];
            s[i]=s[j];
            s[j]=ch;
            i++,j--;
        }
        
    }
    string reverseWords(string s) {
        int sz=s.length();
        int idx=0;
        for(int i=0;i<sz;i++){
            if(s[i]==' '){
                reverseString(s,idx,i-1);
                idx=i+1;
            }
        }
        reverseString(s,idx,sz-1);
        return s;
    }
};