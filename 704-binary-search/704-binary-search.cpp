class Solution {
public:
    int search(vector<int>& nums, int target) {
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
        return -1;
    }
};