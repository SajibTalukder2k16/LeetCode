class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz=nums.size();
        int half = sz/2;
        if(sz&1)
            half++;
        sort(nums.begin(),nums.end());
        return nums[half-1];
        
    }
};