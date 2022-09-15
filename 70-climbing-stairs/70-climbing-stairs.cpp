class Solution {
public:
    int dp[50]={0};
    int climbStairs(int n) {
        if(n==1 || n==0)
            return 1;
        else if(dp[n]!=0)
            return dp[n];
        else
            return dp[n]=climbStairs(n-1)+climbStairs(n-2);
            
    }
};