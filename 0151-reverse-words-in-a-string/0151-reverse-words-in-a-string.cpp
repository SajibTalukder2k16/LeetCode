class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string str;
        vector<string>vec;
        while(ss>>str){
            vec.push_back(str);
        }
        s="";
        int sz = vec.size();
        for(int i=sz-1;i>0;i--){
            s+=vec[i]+" ";
        }
        s+=vec[0];
        return s;
    }
};