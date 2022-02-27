class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int sz=nums.size();
        int mn=100000;
        int mnIndex=-1;
        for(int i=0;i<sz;i++){
            if(nums[i]>=0 && mn>nums[i]){
                mn=nums[i];
                mnIndex=i;
            }
            nums[i]*=nums[i];
        }
        if(mnIndex==-1)
        {
            int temp;
            int half=sz/2;
            for(int i=0;i<half;i++){
                temp=nums[i];
                nums[i]=nums[sz-1];
                nums[sz-1]=temp;
                sz--;
            }
            return nums; 
        }

        vector<int>vec(sz);
        int idx=0;
        int i,j;
        i=mnIndex;
        j=mnIndex-1;
        for(;i<sz && j>=0;){
            if(nums[i]<=nums[j])
            {
                vec[idx++]=nums[i];
                i++;
            }
            else{
                vec[idx++]=nums[j];
                j--;
            }
        }
        if(i<sz)
        {
            for(;i<sz;i++)
                vec[idx++]=nums[i];
        }
        if(j>=0){
            for(;j>=0;j--)
                vec[idx++]=nums[j];
        }
        return vec;
        
    }
};