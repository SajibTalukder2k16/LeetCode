class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>mp;
        int sz = changed.size();
        sort(changed.begin(),changed.end());
        vector<int>out;
        if(sz&1)
            return out;
        for(int i=0;i<sz;i++){
            mp[changed[i]]++;
        }
        for(int i=0;i<sz;i++){
            if(changed[i]==0){
                if(mp[changed[i]]>=2){
                    out.push_back(0);
                    mp[changed[i]]-=2; 
                }
            }
            else if(mp[changed[i]]>0 && mp[changed[i]*2]>0){
                out.push_back(changed[i]);
                mp[changed[i]]--;
                mp[changed[i]*2]--;
            }
        }
        if(out.size()==sz/2)
            return out;
        out.clear();
        return out;
    }
};