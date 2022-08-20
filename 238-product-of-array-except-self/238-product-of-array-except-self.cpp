class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct=1;
        int len = nums.size();
        int cntOfZero = 0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=0)
                totalProduct*=nums[i];
            else
                cntOfZero++;
        }
        if(cntOfZero>1){
            for(int i=0;i<len;i++){
                nums[i]=0;
            }
            return nums;
        }
        else{
           for(int i=0;i<len;i++){
                if(nums[i]!=0 && cntOfZero)
                    nums[i]=0;
                else if(nums[i]!=0)
                    nums[i]=totalProduct/nums[i];
                else{
                    nums[i]=totalProduct;
                }
            } 
            return nums;
        }

            
        
    }
};