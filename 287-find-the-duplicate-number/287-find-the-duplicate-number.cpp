class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sz = nums.size();
        int i=nums[0];
        int prev=0;
        nums[prev]=-1;
        while(nums[i]!=-1 || i<sz){
            prev=i;
            i=nums[i];
            nums[prev]=-1;
            if(nums[i]==-1)
                return i;
        }
        return -1;
    }
};