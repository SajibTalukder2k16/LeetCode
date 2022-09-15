class Solution {
public:
    int sz = 0;
    int dp[1001]={0};
    int foo(vector<int>& cost, int i){
        if(i>=sz)
            return 0;
        if(dp[i]!=-1){
            return dp[i];
        } 
        dp[i]= cost[i] + min(foo(cost,i+1),foo(cost,i+2));
        return dp[i];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        sz = cost.size();
        return min(foo(cost,0),foo(cost,1));
    }
};