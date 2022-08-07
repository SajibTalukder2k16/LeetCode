class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int sz = accounts.size();
        int noOfbanks = accounts[0].size();
        for(int i=0;i<sz;i++){
            for(int j=1;j<noOfbanks;j++){
                accounts[i][j]+=accounts[i][j-1];
            }
        }
        for(int i=0;i<sz;i++)
            if(maxWealth<accounts[i][noOfbanks-1])
                maxWealth=accounts[i][noOfbanks-1];
        return maxWealth;
    }
};