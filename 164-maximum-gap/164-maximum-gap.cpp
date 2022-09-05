class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int sz=nums.size();
        if(sz<2)
            return 0;
        sort(nums.begin(),nums.end());
        int maxGap = 0;
        for(int i=1;i<sz;i++)
            maxGap=max(maxGap,nums[i]-nums[i-1]);
        return maxGap;
    }
};