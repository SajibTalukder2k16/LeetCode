#define mx 2501
class Solution {
public:
    int dp[mx];
    
    int foo(int i,vector<int>& nums,int sz){
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        for(int j=i+1;j<sz;j++)
        {
            if(nums[j]>nums[i]){
                ans=max(ans,foo(j,nums,sz));
            }
        }
        return dp[i]=ans+1;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof dp);
        int ans=1;
        int sz=nums.size();
        for(int i=0;i<sz;i++)
        {
            ans=max(ans,foo(i,nums,sz));
        }
        return ans;
    }
};