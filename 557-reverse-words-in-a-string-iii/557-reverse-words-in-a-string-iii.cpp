class Solution {
public:
    string reverse(string s){
        int len = s.length();
        int half = len/2;
        for(int i=0,j=len-1;i<half;i++,j--){
            swap(s[i],s[j]);
        }
        return s;
    }
    string reverseWords(string s) {
        string out = "";
        stringstream ss(s);
        string str;
        while(ss>>str){
            if(out!="")
                out+=" ";
            out+=reverse(str);
        }
        return out;
    }
};