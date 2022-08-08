class Solution {
public:
    int dp[2501]={0};
    int LIS(int i,int sz,vector<int>&nums){
        if(dp[i]!=0)
            return dp[i];
        int ans = 0;
        for(int j=i+1;j<sz;j++)
        {
            if(nums[i]<nums[j]){
                if(dp[j]!=0 && dp[j]>ans){
                    ans=dp[j];
                }
                else{
                    if(LIS(j,sz,nums)>ans)
                        ans=dp[j];
                }
            }
        }
        return dp[i]=ans+1;
    }
    int lengthOfLIS(vector<int>& nums) {
        int sz = nums.size();
        int mx=1;
        for(int i=0;i<sz;i++){
            mx=max(mx,LIS(i,sz,nums));
        }
        return mx;
    }
};