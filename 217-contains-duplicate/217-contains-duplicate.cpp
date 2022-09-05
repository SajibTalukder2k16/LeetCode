class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ///Sajib Talukder
        
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
        
    }
};