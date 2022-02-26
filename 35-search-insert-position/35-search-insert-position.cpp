class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid;
        while(high>=low){
            mid=(high+low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        if(target>nums[mid])
            mid++;
        return mid;
    }
};