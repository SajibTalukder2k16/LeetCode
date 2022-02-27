class Solution {
    int temp,idx,index,sz,val;
    void foo(int k,vector<int> & nums){
        temp=nums[index];
        idx=index;
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
        sz=nums.size();
        k=k%sz;
        if(k==0)
            return ;
        int gcd = __gcd(k,sz);
        for(int i=0;i<gcd;i++){
            index=i;
            foo(k,nums);
        }
            

            
    }
};