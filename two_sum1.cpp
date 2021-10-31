class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        map<int,int>mp;
        vector<int>out;
        for(int i=0;i<len;i++)
        {
            mp[nums[i]]=i+1;
        }
        for(int i=0;i<len;i++)
        {
            int val=nums[i];
            int t=target-val;
            if(mp[t]!=0 && i!=mp[t]-1)
            {
                out.push_back(i);
                out.push_back(mp[t]-1);
                break;
            }
        }
        return out;
    }
    
};
