class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sz=accounts.size();
        int max_value=0;
        for(int i=0;i<sz;i++)
        {
            int sz1=accounts[i].size();
            int mx=0;
            for(int j=0;j<sz1;j++)
            {
                mx+=accounts[i][j];
            }
            if(mx>max_value)
                max_value=mx;
        }
        return max_value;
        
    }
};