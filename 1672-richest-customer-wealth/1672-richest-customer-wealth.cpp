class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int sz = accounts.size();
        for(int i=0;i<sz;i++){
            int noOfbanks = accounts[i].size();
            int sum=0;
            for(int j=0;j<noOfbanks;j++){
                sum+=accounts[i][j];
            }
            if(sum>maxWealth)
                maxWealth=sum;
        }
        return maxWealth;
    }
};