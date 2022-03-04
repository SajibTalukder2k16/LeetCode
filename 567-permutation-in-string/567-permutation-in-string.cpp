class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int lenS1 = s1.length();
        int lenS2 = s2.length();
        if(lenS2<lenS1)
            return false;
        map<char,int>s1Map,s2Map;
        vector<char>uniqueChar;
        int unique=0;
        int matched=0;
        for(int i=0;i<lenS1;i++){
            if(s1Map[s1[i]]==0){
                unique++;
                uniqueChar.push_back(s1[i]);
            }
                
            s1Map[s1[i]]++;
            s2Map[s2[i]]++;
        }
        for(int i=0;i<unique;i++){
            matched+=min(s1Map[uniqueChar[i]],s2Map[uniqueChar[i]]);
        }
        //cout<<matched<<endl;
        if(matched==lenS1)
            return true;
        int prev1,prev2;
        for(int i=lenS1;i<lenS2;i++){
            prev1=s2Map[s2[i-lenS1]];
            prev2=s1Map[s2[i]];
            s2Map[s2[i-lenS1]]--;
            s2Map[s2[i]]++;
            if(s2[i]!=s2[i-lenS1]){
                if( s1Map[s2[i-lenS1]]>s2Map[s2[i-lenS1]])
                    matched--;
                if(s1Map[s2[i]]>=s2Map[s2[i]])
                    matched++;
                
            }
            //cout<<i<<" "<<matched<<endl;
            //    matched++;
            if(matched==lenS1){
                return true;
            }
                
        }
        return false;;
        
        
        
    }
};