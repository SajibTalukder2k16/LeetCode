class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>magazineCharCount;
        map<char,int>ransomNoteCharCount;
        
        int len = magazine.length();
        for(int i=0;i<len;i++){
            magazineCharCount[magazine[i]]++;
        }
        len =ransomNote.length();
        for(int i=0;i<len;i++){
            ransomNoteCharCount[ransomNote[i]]++;
            if(ransomNoteCharCount[ransomNote[i]]>magazineCharCount[ransomNote[i]])
                return false;
        }
        return true;
        
    }
};