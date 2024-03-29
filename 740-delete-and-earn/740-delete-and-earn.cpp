class Solution {
public:
    int dp[10001]={0};
    int sz = 0;
    map<int,int>mp;
    vector<int>uniques;
    int foo(int i){
        if(i>=sz)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int val = uniques[i];
        int earn = val*mp[val];
        if(i+1==sz)
            return earn;
        if(uniques[i+1]==val+1)
            dp[i]=max(earn + foo(i+2),foo(i+1));
        else
            dp[i]=max(earn+foo(i+1),foo(i+1));
        return dp[i];
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        sz = nums.size();
        int cnt = 0;
        for(int i=0;i<sz;i++){
            if(mp[nums[i]]==0){
                uniques.push_back(nums[i]);
                cnt++;
            }
                
            mp[nums[i]]++; 
        }
        sz = cnt;
        memset(dp,-1,sizeof(dp));
        return foo(0);
    }
};