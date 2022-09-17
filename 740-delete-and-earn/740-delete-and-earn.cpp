class Solution {
public:
    int dp[10001]={0};
    int sz = 0;
    map<int,int>mp;
    int foo(vector<int>& uniques, int i){
        // cout<<i<<endl;
        // cout<<dp[i]<<" "<<sz<<endl;
        if(i>=sz)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        if(mp[uniques[i]+1]!=0)
            dp[i]=max(uniques[i]*mp[uniques[i]]+foo(uniques,i+2),foo(uniques,i+1));
        else
            dp[i]=max(uniques[i]*mp[uniques[i]]+foo(uniques,i+1),foo(uniques,i+1));
        return dp[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>uniques;
        sz = nums.size();
        int cnt=0;
        for(int i=0;i<sz;i++){
            // cout<<mp[nums[i]]<<nums[i]<<endl;
            if(mp[nums[i]]==0){
                uniques.push_back(nums[i]);
                cnt++;
            }  
            mp[nums[i]]++; 
        }
        sz = cnt;
        memset(dp,-1,sizeof(dp));
        return foo(uniques,0);
    }
};