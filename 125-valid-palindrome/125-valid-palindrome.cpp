class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length();
        string output = "";
        int cnt=0;
        for(int i=0;i<len;i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]-'A'+'a';
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') ){
                output+=s[i];
                cnt++;
            }
                
        }
        len=cnt;
        for(int i=0,j=len-1;i<=j;i++,j--){
            if(output[i]!=output[j]){
                return false;
            }
                
        }
        return true;
    }
};