class Solution {
public:
    bool visited[51][51]={false};
    int level[51][51]={0};
    int directionX[4]={0,0,1,-1};
    int directionY[4]={1,-1,0,0};
    int row,col;
    bool validPosition(int i,int j){
        if(i>=0 && i<row && j>=0 && j<col){
            if(visited[i][j]==false)
                return true;
        }
            
        return false;
    }
    bool fresh(vector<vector<int>>& grid){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                    return true;
            }
        }
        return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>rottens;
        row=grid.size();
        col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==2){
                    rottens.push_back(make_pair(i,j));
                }
            }
        }
        int maxTime=0;
        int sz=rottens.size();
        int p_i,p_j,f_i,f_j,new_pos_i,new_pos_j;
        pair<int,int>pr;
        queue<pair<int,int>>qq;
        for(int i=0;i<sz;i++){
            p_i=rottens[i].first;
            p_j=rottens[i].second;
            qq.push(make_pair(p_i,p_j));
            visited[p_i][p_j]=true;
        }
        while(!qq.empty()){
            pr=qq.front();
            f_i=pr.first;
            f_j=pr.second;
            qq.pop();
            bool check=false;
            for(int j=0;j<4;j++){
                new_pos_i=f_i+directionX[j];
                new_pos_j=f_j+directionY[j];
                if(validPosition(new_pos_i,new_pos_j)){
                    if(grid[new_pos_i][new_pos_j]==1){
                        level[new_pos_i][new_pos_j]=level[f_i][f_j]+1;
                        int val=level[new_pos_i][new_pos_j];
                        if(val>maxTime)
                            maxTime=val;
                        visited[new_pos_i][new_pos_j]=true;
                        grid[new_pos_i][new_pos_j]=2;
                        qq.push(make_pair(new_pos_i,new_pos_j));
                        check=true;
                    }   
                }
            }
        }
            
            
        if(fresh(grid))
            return -1;
        
        return maxTime;
    }
};