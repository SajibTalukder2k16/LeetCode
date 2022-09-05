class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int currentSum = 0;
        int maxSum = -100000;
        for(int i=0;i<len;i++){
            if(currentSum+nums[i]>0)
                currentSum+=nums[i];
            else
                currentSum=0;
            maxSum=max(maxSum,nums[i]);
            if(currentSum!=0)
                maxSum=max(currentSum,maxSum);
        }
        return maxSum;
    }
};