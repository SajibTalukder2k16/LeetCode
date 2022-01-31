class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0)
            return;
        int sz=nums.size();
        k=k%sz;
        vector<int>ara(sz);
        int i,j;
        for(i=0,j=k;j<sz;i++,j++)
            ara[j]=nums[i];
        for(j=0;j<k;j++)
            ara[j]=nums[i++];
        nums=ara;
        
    }
};