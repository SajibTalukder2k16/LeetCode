class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ///Sajib Talukder
        unordered_map<int,int>mp;
        vector<int>vec(2);
        int sz = nums.size();
        for(int i=0;i<sz;i++){
            int val=mp[target-nums[i]];
            if(val!=0)
            {
                vec[0]=val-1;
                vec[1]=i;
                break;
            }
            mp[nums[i]]=i+1;
        }
        return vec;
    }
};