///Email: sajibtalukder2k16@gmail.com

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        //you can use map or unordered_map,It gave same runtime for this problem. 
        unordered_map<int,int>mp;
        vector<int>out;
        for(int i=0;i<len;i++)
        {
            int val=nums[i];
            int t=target-val;
            if(mp[t]!=0 && i!=mp[t]-1)
            {
                out.push_back(mp[t]-1);
                out.push_back(i);
                break;
            }
            mp[val]=i+1;
        }
        return out;
    }
    
};
