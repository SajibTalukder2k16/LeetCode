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
        }
        for(int i=0;i<26;i++){
            // cout<<charCountOfS[i]<<" "<<charCountOfT[i]<<endl;
            if(charCountOfS[i]!=charCountOfT[i])
                return false;
        }
            
        return true;
    }
};