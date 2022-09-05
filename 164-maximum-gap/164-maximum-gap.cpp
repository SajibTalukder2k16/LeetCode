class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sz=nums.size();
        int maxGap = 0;
        for(int i=1;i<sz;i++)
            maxGap=max(maxGap,nums[i]-nums[i-1]);
        return maxGap;
    }
};