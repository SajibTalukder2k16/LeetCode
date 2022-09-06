class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ///Sajib Talukder
        unordered_map<int,bool>mp;
        int sz = nums.size();
        for(int i=0;i<sz;i++){
            if(mp[nums[i]]==true)
                return true;
            mp[nums[i]]=true;
        }
        return false;
        
    }
};