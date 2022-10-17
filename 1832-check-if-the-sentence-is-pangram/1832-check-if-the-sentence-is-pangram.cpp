class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool checker[26]={false};
        int len = sentence.length();
        int cnt = 0;
        for(int i=0;i<len;i++){
            if(!checker[sentence[i]-'a']){
                cnt++;
                if(cnt==26)
                    return true;
                checker[sentence[i]-'a']=true;
            }
        }
        return false;
        
    }
};