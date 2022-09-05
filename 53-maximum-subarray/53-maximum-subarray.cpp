class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int currentSum = 0;
        int maxSum = -100000;
        for(int i=0;i<len;i++){
            currentSum+=nums[i];
            maxSum=max(currentSum,maxSum);
            currentSum=max(0,currentSum);
        }
        return maxSum;
    }
};