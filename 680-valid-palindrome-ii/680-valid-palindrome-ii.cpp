class Solution {
public:
    bool checkPalindrome(string &s,int index,int len){
        int i=0,j=len-1;
        while(i<j){
            if(i==index)
                i++;
            if(j==index)
                j--;
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int len=s.length();
        int i=0,j=len-1;
        while(i<j){
            if(s[i]!=s[j])
                break;
            i++;
            j--;
        }
        return checkPalindrome(s,i,len)||checkPalindrome(s,j,len);
    }
};