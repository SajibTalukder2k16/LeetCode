#define inf 9999999
#define mx 10001

class Solution {
public:
    int foo(int weight,vector<int>& coins,int sz, vector<int>& dp){
        int mn=inf;
        for(int i=0;i<sz;i++)
        {
            if(weight-coins[i]>=0){
                if(dp[weight-coins[i]]!=-1){
                    mn=min(mn,1+dp[weight-coins[i]]);
                }
                else{
                    mn=min(mn,1+foo(weight-coins[i],coins,sz,dp));
                }
                
            }
                
        }
        return dp[weight]=mn;
        
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0;
        int sz=coins.size();
        vector<int>dp(mx,-1);
        dp[0]=0;
        int val=foo(amount,coins,sz,dp);
        if(val==inf)
            return -1;
        return val;
    }
};