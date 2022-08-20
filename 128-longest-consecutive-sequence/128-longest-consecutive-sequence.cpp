class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        int maxCnt=1;
        int len = nums.size();
        if(len==0)
            return 0;
        for(int i=1;i<len;i++){
            if(nums[i]-nums[i-1]==1)
                cnt++;
            else if(nums[i]-nums[i-1]==0)
                continue;
            else{
                maxCnt = max(cnt,maxCnt);
                cnt=1;
            }
        }
        maxCnt = max(cnt,maxCnt);
        return maxCnt;
        
    }
};