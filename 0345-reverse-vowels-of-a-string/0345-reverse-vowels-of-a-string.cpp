class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        vector<char>lists;
        for(int i=0;i<len;i++){
            if('a'==s[i] ||'e'==s[i] ||'i'==s[i] ||'o'==s[i] ||'u'==s[i] ||'A'==s[i] || 'E'==s[i] || 'I'==s[i] || 'O'==s[i] || 'U'==s[i]){
                lists.push_back(s[i]);
                s[i]='*';
            }
        }
        int j=lists.size()-1;
        for(int i=0;i<len && j>=0;i++){
            if(s[i]=='*'){
                s[i]=lists[j];
                j--;
            }
        }
        return s;
    }
};