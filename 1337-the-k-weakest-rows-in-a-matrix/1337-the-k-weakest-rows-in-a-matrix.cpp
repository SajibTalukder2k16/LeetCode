class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int> > vec_pr;
        int row=mat.size();
        int col=mat[0].size();
        vector<int>soldiers;
        for(int i=0;i<row;i++){
            int cnt=0;
            for(int j=0;j<col;j++){
                if(mat[i][j]==1)
                    cnt++;
            }
            soldiers.push_back(cnt);
        }
        for(int i=1;i<row;i++){
            // if(soldiers[i]>=soldiers[i-1]){
                vec_pr.push_back(make_pair(soldiers[i-1],i-1));
            // }
        }
        vec_pr.push_back(make_pair(soldiers[row-1],row-1));
        sort(vec_pr.begin(),vec_pr.end());
        vector<int>vec;
        for(int i=0;i<k;i++)
            vec.push_back(vec_pr[i].second);
        return vec;
    }
};