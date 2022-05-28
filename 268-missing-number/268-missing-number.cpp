class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalSum=0;
        int sum=0;
        int sz=nums.size();
        for(int i=0;i<sz;i++){
            sum+=nums[i];
            totalSum+=i+1;
        }
        return totalSum-sum;
        
    }
};