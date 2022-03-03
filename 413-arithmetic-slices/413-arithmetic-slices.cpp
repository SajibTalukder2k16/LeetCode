class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        int cnt=2;
        for(int i=2;i<len;i++){
            if(nums[i]-nums[i-1]== nums[i-1]-nums[i-2]){
                cnt++;
            }
            else{
                cnt=(cnt-3)+1;
                if(cnt>0){  
                    sum+=(cnt*(cnt+1))/2;
                }
                cnt=2;
            }
        }
        cnt=(cnt-3)+1;
        if(cnt>0){
            sum+=(cnt*(cnt+1))/2;
        }
        return sum;
        
    }
};