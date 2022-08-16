class Solution {
public:
    int firstUniqChar(string s) {
        int ara[26]={0};
        int pos[26]={-1};
        int len = s.length();
        for(int i=0;i<len;i++){
            ara[s[i]-'a']++;
            pos[s[i]-'a']=i;
        }
        int output = len;
        for(int i=0;i<26;i++){
            if(ara[i]==1){
                output = min(pos[i],output);
            }
        }
        return output==len? -1:output;
    }
};