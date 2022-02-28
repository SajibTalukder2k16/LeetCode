class Solution {
public:
    int search(vector<int>& nums, int target ,int numSize,int lowIndex) {
        int high = numSize-1;
        int low = lowIndex+1;
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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sz=numbers.size();
        vector<int>vec;
        for(int i=0;i<sz;i++){
            int val=search(numbers,target-numbers[i],sz,i);
            if(val!=-1){
                vec.push_back(i+1);
                vec.push_back(val+1);
                break;
            }
                
        }
        return vec;
        
    }
};