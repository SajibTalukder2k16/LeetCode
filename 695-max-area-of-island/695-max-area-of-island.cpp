class Solution {
public:
    bool visited[51][51]={false};
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
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<pair<int,int>>Ones;
        row=grid.size();
        col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]){
                    Ones.push_back(make_pair(i,j));
                }
            }
        }
        int maxArea=0;
        int sz=Ones.size();
        int p_i,p_j,f_i,f_j,new_pos_i,new_pos_j;
        pair<int,int>pr;
        int cnt;
        
        for(int i=0;i<sz;i++){
            p_i=Ones[i].first;
            p_j=Ones[i].second;
            cnt=0;
            
            if(visited[p_i][p_j]==false){
                queue<pair<int,int>>qq;
                qq.push(make_pair(p_i,p_j));
                visited[p_i][p_j]=true;
                while(!qq.empty()){
                    cnt++;
                    pr=qq.front();
                    f_i=pr.first;
                    f_j=pr.second;
                    qq.pop();
                    for(int j=0;j<4;j++){
                        new_pos_i=f_i+directionX[j];
                        new_pos_j=f_j+directionY[j];
                        if(validPosition(new_pos_i,new_pos_j)){
                            if(grid[new_pos_i][new_pos_j]==1){
                                visited[new_pos_i][new_pos_j]=true;
                                qq.push(make_pair(new_pos_i,new_pos_j));
                            }
                                
                        }
                    }
                }
                if(cnt>maxArea)
                    maxArea=cnt;
                cnt=0;
            }
            
        }
        
        return maxArea;
        
        
    }
};