class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        int sz1=nums1.size();
        int sz2=nums2.size();
        int sz=sz1+sz2;
        int i=0,j=0;
        for(;i<sz1 && j<sz2;)
        {
            if(nums1[i]<=nums2[j])
            {
                vec.push_back(nums1[i]);
                i++;
            }
            else
            {
                vec.push_back(nums2[j]);
                j++;
            }
        }
        if(i<=sz1-1)
        {
            for(;i<sz1;i++)
                vec.push_back(nums1[i]);
        }
        if(j<=sz2-1)
        {
            for(;j<sz2;j++)
                vec.push_back(nums2[j]);
        }
        // cout<<sz<<" "<<vec.size()<<endl;
        // return 1.0;
        if(sz&1)
            return (double)vec[sz/2];//<<endl;
        else
            return (vec[(sz/2)-1]+vec[sz/2])/2.0;;//endl;
        
    }
};