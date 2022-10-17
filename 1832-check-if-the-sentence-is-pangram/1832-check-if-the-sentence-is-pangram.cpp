class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool checker[26]={false};
        int len = sentence.length();
        int cnt = 0;
        int ch;
        for(int i=0;i<len;i++){
            ch = sentence[i]-'a';
            if(!checker[ch]){
                cnt++;
                if(cnt==26)
                    return true;
                checker[ch]=true;
            }
        }
        return false;
        
    }
};