class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        vector<int>vec(256,-1);
        int start=-1;
        int res=0;
        for(int i=0;i<len;i++){
            //cout<<res<<" "<<vec[s[i]]<<endl;
            if(start<vec[s[i]])
                start=vec[s[i]];
            res=max(res,i-start);
            vec[s[i]]=i;
            
        }
        return res;
    }
};