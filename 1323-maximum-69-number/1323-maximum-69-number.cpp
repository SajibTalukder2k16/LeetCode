class Solution {
public:
    int maximum69Number (int num) {
        int add = 3;
        int temp = num;
        vector<int>nums;
        while(temp>10){
            nums.push_back(temp%10);
            temp/=10;
            add*=10;
        }
        nums.push_back(temp%10);
        int sz = nums.size();
        for(int i=sz-1;i>=0;i--){
            if(nums[i]==6){
                num+=add;
                return num;
            }
            add/=10;
        }
        return num;
    }
};