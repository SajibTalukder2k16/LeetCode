class Solution {
public:
    int firstUniqChar(string s) {
        int ara[26]={0};
        int pos[26]={-1};
        int len = s.length();
        vector<char>vec;
        for(int i=0;i<len;i++){
            ara[s[i]-'a']++;
            pos[s[i]-'a']=i;
            vec.push_back(s[i]);
        }
        int sz=vec.size();
        for(int i=0;i<sz;i++){
            if(ara[vec[i]-'a']==1)
                return pos[vec[i]-'a'];
        }
        return -1;
        
        
    }
};