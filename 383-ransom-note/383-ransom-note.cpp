class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransomNoteCharCount[26]={0};
        int magazineCharCount[26]={0};
        int len = magazine.length();
        for(int i=0;i<len;i++){
            magazineCharCount[magazine[i]-'a']++;
        }
        len =ransomNote.length();
        for(int i=0;i<len;i++){
            ransomNoteCharCount[ransomNote[i]-'a']++;
            if(ransomNoteCharCount[ransomNote[i]-'a']>magazineCharCount[ransomNote[i]-'a'])
                return false;
        }
        return true;
        
    }
};