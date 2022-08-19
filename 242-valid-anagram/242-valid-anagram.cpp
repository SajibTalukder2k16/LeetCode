class Solution {
public:
    bool isAnagram(string s, string t) {
        int lenS = s.length();
        int lenT = t.length();
        if(lenS!=lenT)
            return false;
        int charCountOfS[26]={0};
        int charCountOfT[26]={0};
        for(int i=0;i<lenT;i++)
            charCountOfT[t[i]-'a']++;
        for(int i=0;i<lenS;i++){
            charCountOfS[s[i]-'a']++;
            if(charCountOfS[s[i]-'a']>charCountOfT[s[i]-'a'])
                return false;
        } 
        return true;
    }
};