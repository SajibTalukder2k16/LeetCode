class Solution {
public:
    int dp[101]={0};
    int sz = 0;
    int foo(vector<int>& nums, int i){
        if(i>=sz)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        dp[i]=max(nums[i]+foo(nums,i+2),foo(nums,i+1));
        return dp[i];
    }
    int rob(vector<int>& nums) {
        sz = nums.size();
        memset(dp,-1,sizeof(dp));
        return foo(nums,0);
    }
};