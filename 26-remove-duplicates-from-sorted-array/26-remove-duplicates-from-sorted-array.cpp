class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len =nums.size();
        if(len<2)
            return len;
        int uniques=1;
        for(int i=1;i<len;i++){
            if(nums[i]!=nums[i-1]){
                nums[uniques]=nums[i];
                uniques++;
            }
                
        }
        return uniques;
    }
    
};