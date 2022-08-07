class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int sz = accounts.size();
        int noOfbanks = accounts[0].size();
        int sum=0;
        for(int i=0;i<sz;i++){
            for(int j=0;j<noOfbanks;j++){
                sum+=accounts[i][j];
            }
            maxWealth=max(maxWealth,sum);
            sum=0;
        }
        return maxWealth;
    }
};