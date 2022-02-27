class Solution {
    void foo(int index,int k,int sz,vector<int> & nums){
        int temp=nums[index];
        int idx=index;
        int val;
        index+=k;
        while(index!=idx){
            val=nums[index];
            nums[index]=temp;
            temp=val;
            if(index+k<sz)
                index+=k;
            else{
                index+=k;
                index=index-sz;
            }
        }
        nums[idx]=temp;
    }
public:
    void rotate(vector<int>& nums, int k) {
        if(k==0)
            return;
        int sz=nums.size();
        k=k%sz;
        if(k==0)
            return ;
        int gcd = __gcd(k,sz);
        for(int i=0;i<gcd;i++)
            foo(i,k,sz,nums);

            
    }
};