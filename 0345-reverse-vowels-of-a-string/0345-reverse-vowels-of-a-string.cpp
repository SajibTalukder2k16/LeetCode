class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        char vowels[] = {'a','e','i','o','u','A', 'E', 'I', 'O', 'U'};
        vector<char>lists;
        for(int i=0;i<len;i++){
            for(int j=0;j<10;j++){
                if(vowels[j]==s[i]){
                    lists.push_back(s[i]);
                    s[i]='*';
                    break;
                }   
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