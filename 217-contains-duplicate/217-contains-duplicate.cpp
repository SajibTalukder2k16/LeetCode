class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        ///Sajib Talukder
        
        int szOfSet = set<int>(nums.begin(),nums.end()).size();
        return nums.size()>szOfSet;
        
    }
};