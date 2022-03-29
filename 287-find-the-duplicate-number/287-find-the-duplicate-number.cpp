class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sz=nums.size();
        bool map[100001]={false};
        int i;
        for(i=0;i<sz;i++){
            if(map[nums[i]]==true)
                break;
            map[nums[i]]=true;
        }
        return nums[i];
        
    }
};