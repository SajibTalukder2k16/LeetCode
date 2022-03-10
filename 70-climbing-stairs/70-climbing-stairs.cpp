class Solution {
public:
    int dp[46]={0};
    int climbStairs(int n) {
        if(n==1||n==2)
            return n;
        else if(dp[n]!=0)
            return dp[n];
        else
        {
            dp[n]=0;
            if(dp[n-1]!=0)
                dp[n]+=dp[n-1];
            else
                dp[n]+=climbStairs(n-1);
            if(dp[n-2]!=0)
                dp[n]+=dp[n-2];
            else
                dp[n]+=climbStairs(n-2);
            return dp[n];
        }
            
    }
};