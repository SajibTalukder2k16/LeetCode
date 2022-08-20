class Codec {
public:
    char enCrypt[52] = {
                            'm','x','o','q',
                            'z','1','5','9',
                            'w','7','p','e',
                            'd','b','2','0',
                            'y','v','c','*',
                            '3','$','4','g',
                            'i','^',
                            'M','X','O','Q',
                            'Z','%','&',')',
                            'W','(','P','E',
                            'D','B','R','L',
                            'Y','V','C','J',
                            'K','E','6','G',
                            'I','U'
                        };
    map<char,char>mp;

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        int len = strs.size();
        string output = "";
        for(int i=0;i<len;i++){
            output+=strs[i] + "á";
        }
        // cout<<output<<endl;
        return output;
    }
    string encrypt(string str){
        int len = str.length();
        for(int i=0;i<len;i++){
            char temp = str[i];
            if(str[i]<'a'){
                str[i]=enCrypt[str[i]-'A'+26];
                mp[str[i]] = temp;
            }
            else{
                str[i]=enCrypt[str[i]-'a'];
                mp[str[i]] = temp;
            }
                
        }
        return str;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string>vec;
        string str = "";
        int len = s.length();
        for(int i=0;i<len;i++){
            if(int(s[i])>=0 && int(s[i])<=255)
            {
                str+=s[i];
            }
            else{
                // s[i]=mp[s[i]];
                vec.push_back(str);
                str="";
                i++;
                continue;
                
            }
        }
        return vec;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));