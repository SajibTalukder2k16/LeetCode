class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>vec;
        int sz=nums.size();
        if(sz==0)
            return vec;
        int startIndex=nums[0],endIndex=nums[0];
        string str;
        for(int i=1;i<sz;i++)
        {
            //cout<<i<<endl;
            if(nums[i]==nums[i-1]+1){
                endIndex=nums[i];
            }
            else
            {
                if(startIndex==endIndex){
                    str= to_string(startIndex) ;
                    vec.push_back(str);
                }
                else{
                    str=to_string(startIndex)+"->"+ to_string(endIndex);
                    vec.push_back(str);
                }
                startIndex=nums[i];
                endIndex=nums[i];
                //i++;
            }
        }
        if(startIndex==endIndex){
            str= to_string(startIndex) ;
            vec.push_back(str);
        }
        else{
            str=to_string(startIndex)+"->"+ to_string(endIndex);
            vec.push_back(str);
        }
        
        return vec;
        
    }
};