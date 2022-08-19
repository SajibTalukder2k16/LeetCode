class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int sz = nums.size();
        for(int i=0;i<sz;i++){
            if(mp[target-nums[i]]!=0)
            {
                return vector<int>{mp[target-nums[i]]-1,i};
            }
            mp[nums[i]]=i+1;
        }
        return nums;
    }
};