class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz=nums.size();
        unordered_set<int>setOfNums(nums.begin(),nums.end());;
        if(sz!=setOfNums.size())
            return true;
        return false;
        
    }
};