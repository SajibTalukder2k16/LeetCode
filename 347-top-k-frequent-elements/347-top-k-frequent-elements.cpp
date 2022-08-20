class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<int>vec;
        int len = nums.size();
        for(int i=0;i<len;i++){
            if(mp[nums[i]]==0)
                vec.push_back(nums[i]);
            mp[nums[i]]++;
        }
        int sz = vec.size();
        vector<pair<int,int>>vecPairs;
        for(int i=0;i<sz;i++){
            vecPairs.push_back(make_pair(mp[vec[i]],vec[i]));
        }
        sort(vecPairs.begin(),vecPairs.end());
        vec.clear();
        for(int i=sz-1;k>0;i--,k--){
            vec.push_back(vecPairs[i].second);
        }
        return vec;
    }
};