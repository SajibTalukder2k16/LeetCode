class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        map<int,int>mp;
        int half=sz/2;
        if(sz&1)
            half++;
        for(int i=0;i<sz;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>=half)
            {
                return nums[i];
            }
                
        }
        return 0;
        
    }
};