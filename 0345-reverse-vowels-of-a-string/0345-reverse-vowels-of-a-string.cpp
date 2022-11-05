class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        char vowels[] = {'a','e','i','o','u','A', 'E', 'I', 'O', 'U'};
        unordered_map<char,bool> ump;
        for(int i=0;i<10;i++){
            ump[vowels[i]]=true;
        }
        vector<char>lists;
        for(int i=0;i<len;i++){
            if(ump[s[i]]){
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