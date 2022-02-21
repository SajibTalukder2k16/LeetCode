class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz = nums.size();
        cout<<sz<<endl;
        int ret=0,ret_value=-1;
        map<int,int>mp;
        for(int i=0;i<sz;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>ret)
            {
               ret=mp[nums[i]]; 
                ret_value=nums[i];
            }
                
        }
        
        return ret_value;;
    }
};