class Solution {
public:
    int row,col,val;
    bool checker(vector<vector<int>>& matrix,int i,int j){
        val = matrix[i][j];
        i++;
        j++;
        while(i<row && j<col){
            if(matrix[i][j]!=val)
                return false;
            i++,j++;
        }
        return true;
    }
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = matrix[0].size();
        bool result = true;
        for(int i=0;i<row;i++){
            result&=checker(matrix,i,0);
        }
        for(int i=0;i<col;i++){
            result&=checker(matrix,0,i);
        }
        return result;
    }
};