class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sz=nums.size();
        for(int i=1;i<sz;i++){
            nums[i]+=nums[i-1];
        }
        return nums;
        
    }
};