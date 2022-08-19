class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ///Sajib Talukder
        
        return nums.size() > unordered_set<int>(nums.begin(),nums.end()).size();
        
    }
};