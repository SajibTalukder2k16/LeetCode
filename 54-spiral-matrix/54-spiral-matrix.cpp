class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>vec;
        
        int leftLimit=0;
        int rightLimit=col;
        int topLimit=0;
        int bottomLimit = row;
        while(leftLimit<rightLimit && topLimit<bottomLimit){
            //left to right
            int i,j;
            bool checker=true;
            for(i=leftLimit,j=topLimit;j<rightLimit;j++){
                vec.push_back(matrix[i][j]);
                checker=false;
            }
            if(checker)
                break;
            checker=true;
            i++;
            j--;
            //top to bottom
            for(;i<bottomLimit;i++){
                vec.push_back(matrix[i][j]);
                checker=false;
            }
            //right to left
            if(checker)
                break;
            checker=true;
            j--;
            i--;
            // if(i==leftLimit || j==topLimit)
                 // break;
            for(;j>=leftLimit;j--){
                vec.push_back(matrix[i][j]);
                checker=false;
            }
            if(checker)
                break;
            checker=true;
            //bottom to top
            i--;
            j++;
            for(;i>topLimit;i--){
                vec.push_back(matrix[i][j]);
                checker=false;
            }
            if(checker)
                break;
            checker=true;
            leftLimit++;
            rightLimit--;
            topLimit++;
            bottomLimit--;
        }
        
        return vec;
        
        
    }
};