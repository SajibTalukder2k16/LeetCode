class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lenS=s.length();
        int lenT=t.length();
        int i=0,j=0;
        if(i==lenS)
            return true;
        if(lenS>lenT)
            return false;
        for(;j<lenT;j++){
            if(s[i]==t[j])
                i++;
            if(i==lenS)
                return true;
        }
        return false;
    }
};