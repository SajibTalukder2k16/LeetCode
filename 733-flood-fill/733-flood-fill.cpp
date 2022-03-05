class Solution {
public:
    bool visited[51][51]={false};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        queue<pair<int,int> >qq;
        qq.push(make_pair(sr,sc));
        pair<int,int>pr;
        int i,j;
        int row=image.size();
        int col=image[0].size();
        int color;
        
        while(!qq.empty()){
            pr=qq.front();
            qq.pop();
            i=pr.first;
            j=pr.second;
            color=image[i][j];
            visited[i][j]=true;
            image[i][j]=newColor;
            
            if(i-1>=0 && i-1<row && j>=0 && j<col)
                if(visited[i-1][j]==false && color==image[i-1][j])
                    qq.push(make_pair(i-1,j));

            if(i+1>=0 && i+1<row && j>=0 && j<col)
                if(visited[i+1][j]==false && color==image[i+1][j])
                    qq.push(make_pair(i+1,j));

            if(i>=0 && i<row && j-1>=0 && j-1<col)
                if(visited[i][j-1]==false && color==image[i][j-1])
                    qq.push(make_pair(i,j-1));

            if(i>=0 && i<row && j+1>=0 && j+1<col)
                if(visited[i][j+1]==false && color==image[i][j+1])
                    qq.push(make_pair(i,j+1));
        }
        return image;
    }
};