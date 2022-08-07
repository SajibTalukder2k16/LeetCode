class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int sz = accounts.size();
        for(int i=0;i<sz;i++){
            int noOfbanks = accounts[i].size();
            for(int j=1;j<noOfbanks;j++){
                accounts[i][j]+=accounts[i][j-1];
            }
            if(accounts[i][noOfbanks-1]>maxWealth)
                maxWealth=accounts[i][noOfbanks-1];
        }
        return maxWealth;
    }
};