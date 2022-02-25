class Solution {
public:
    vector<int> splitting(string str,int len)
    {
        vector<int>vec;
        string out="";
        for(int i=0;i<len;i++)
        {
            if(str[i]=='.')
            {
                if(out=="")
                {
                    vec.push_back(0);
                    continue;
                }
                stringstream ss(out);
                int val;
                ss>>val;
                vec.push_back(val);
                out="";
                
            }
            else{
                out+=str[i];
            }
        }
        if(out!=""){
           stringstream ss(out);
            int val;
            ss>>val;
            vec.push_back(val); 
        }
        return vec;
        
    }
    
    int compare(string ver1,string ver2,int len1,int len2)
    {
        vector<int>vec1,vec2;
        vec1=splitting(ver1,len1);
        vec2=splitting(ver2,len2);
        len1=vec1.size();
        len2=vec2.size();
        int len=min(len1,len2);
        for(int i=0;i<len;i++)
        {
            if(vec1[i]>vec2[i])
                return 1;
            else if(vec2[i]>vec1[i])
                return -1;
        }
        if(len1==len2)
            return 0;
        else if(len1>len2)
        {
            for(int i=len;i<len1;i++)
                if(vec1[i]!=0)
                    return 1;
            return 0;
        }
        else{
            for(int i=len;i<len2;i++)
                if(vec2[i]!=0)
                    return -1;
            return 0;
        }
        return 0;
    }
    
    int compareVersion(string version1, string version2) {
        int len1=version1.length();
        int len2=version2.length();
        return compare(version1,version2,len1,len2);
    }
};