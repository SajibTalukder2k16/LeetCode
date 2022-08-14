class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool>duplicate;
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            if(duplicate[nums[i]]==true)
                return true;
            duplicate[nums[i]]=true;
        }
        return false;
    }
};