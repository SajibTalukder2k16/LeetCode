
#define mx 10001
class Solution {
public:
    int sz;
    int dp[mx];
    vector<int>uniqueNums;
    map<int,int>mapCount;
    int foo(int pos){
        if(pos>=sz)
            return 0;
        if(dp[pos]!=-1)
            return dp[pos];
        int val=uniqueNums[pos];
        int nextPos=pos+1;
        int res1=val*mapCount[val];
        if(nextPos==sz)
            return res1;
        if(uniqueNums[nextPos]==val+1)
            nextPos++;
        res1+=foo(nextPos);
        int res2=foo(pos+1);
        dp[pos]=max(res1,res2);
        return dp[pos];
        
    }
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        memset(dp,-1,sizeof dp);
        sz=nums.size();
        int cnt=0;
        for(int i=0;i<sz;i++){
            if(mapCount[nums[i]]==0){
                uniqueNums.push_back(nums[i]);
                cnt++;
            }   
            mapCount[nums[i]]++;
        }
        sz=cnt;
        int res=foo(0);

        return res;
    }
};