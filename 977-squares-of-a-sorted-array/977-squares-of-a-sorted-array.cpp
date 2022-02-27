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
            int half=sz/2;
            for(int i=0;i<half;i++){
                swap(nums[i],nums[sz-1]);
                sz--;
            }
            return nums;
                
                
        }
        //cout<<"Hello"<<endl;
        vector<int>vec(sz);
        int idx=0;
        //int val=nums[mnIndex];
        //vec[idx++]=val;
        //cout<<"Hello"<<endl;
        int i,j;
        i=mnIndex;
        j=mnIndex-1;
        //cout<<"Hello"<<endl;
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
        //nums=vec;
            
        //sort(nums.begin(),nums.end());
        return vec;
        
    }
};