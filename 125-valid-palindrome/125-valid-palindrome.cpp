class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.length();
        for(int i=0,j=len-1;i<=j;){
            if(s[i]>='A' && s[i]<='Z')
                s[i]=s[i]-'A'+'a';
            if(s[j]>='A' && s[j]<='Z')
                s[j]=s[j]-'A'+'a';
            if(!((s[i]>='a' && s[i]<='z') ||(s[i]>='0' && s[i]<='9'))){
                i++;
                continue;
            }
            if(!((s[j]>='a' && s[j]<='z') ||(s[j]>='0' && s[j]<='9'))){
                j--;
                continue;
            }
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
                
        }
        return true;
    }
};