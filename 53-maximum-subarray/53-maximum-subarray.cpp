class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int currentSum = 0;
        int maxSum = 0;
        int bigger=-100000;
        for(int i=0;i<len;i++){
            bigger=max(bigger,nums[i]);
            if(currentSum+nums[i]>0)
                currentSum+=nums[i];
            else
                currentSum=0;
            maxSum=max(currentSum,maxSum);
        }
        if(maxSum==0)
            return bigger;
        return maxSum;
    }
};