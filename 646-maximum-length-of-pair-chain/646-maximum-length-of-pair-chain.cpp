#define mx 2501
class Solution {
public:
    int dp[mx];
    
    int foo(int i,vector<vector<int>>& nums,int sz){
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        for(int j=i+1;j<sz;j++)
        {
            if(nums[j][0]>nums[i][1]){
                if(dp[j]!=-1)
                    ans=max(ans,dp[j]);
                else
                    ans=max(ans,foo(j,nums,sz));
            }
        }
        return dp[i]=ans+1;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        //memset(dp,-1,sizeof dp);
        int ans=1;
        int sz=pairs.size();
        for(int i=0;i<sz;i++)
            dp[i]=-1;
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<sz;i++)
        {
            ans=max(ans,foo(i,pairs,sz));
        }
        return ans;
    }
};