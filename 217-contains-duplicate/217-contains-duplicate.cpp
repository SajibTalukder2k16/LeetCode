class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>setOfNums(nums.begin(),nums.end());;
        if(nums.size()!=setOfNums.size())
            return true;
        return false;
        
    }
};