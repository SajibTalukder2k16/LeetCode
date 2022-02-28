class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz=nums.size();
        int index=0;
        for(int i=0;i<sz;i++){
            if(nums[i]!=0){
                nums[index++]=nums[i];
            }
        }
        for(int i=index;i<sz;i++)
            nums[i]=0;
        
    }
};