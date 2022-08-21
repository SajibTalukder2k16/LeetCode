class Solution {
public:
    int findMin(vector<int>& nums) {
        int sz=nums.size();
        int val=nums[0];
        if(val<nums[sz-1])
            return nums[0];
        int curMinVal = val;
        int low = 0;
        int high = sz -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=curMinVal){
                low=mid+1;
            }
            else{
                high=mid-1;
                curMinVal=min(curMinVal,nums[mid]);
            }
        }
        return curMinVal;
    }
};