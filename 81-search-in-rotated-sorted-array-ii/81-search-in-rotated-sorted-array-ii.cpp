class Solution {
public:
    bool binarySearch(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int low = 0;
        int mid;
        while(high>=low){
            mid=(high+low)/2;
            if(nums[mid]==target)
                return true;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int sz=nums.size();
        int startIndex=0;
        for(int i=1;i<sz;i++){
            if(nums[i]<nums[i-1]){
                startIndex=i;
                break;
            }
        }
        vector<int>vec(sz);
        int j=0;
        if(startIndex!=0){
            for(int i=startIndex;i<sz;i++)
                vec[j++]=nums[i];
            for(int i=0;i<startIndex;i++)
                vec[j++]=nums[i];
        }
        bool res;
        if(startIndex!=0)
            res = binarySearch(vec,target);
        else
            res = binarySearch(nums,target);
        return res;
    }
};