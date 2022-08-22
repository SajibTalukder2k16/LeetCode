class Solution {
public:
    int currentChar=-1;
    bool rowChecker(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            int mp[10]={0};
            for(int j=0;j<9;j++){
                currentChar=board[i][j]-'0';
                // currentChar--;
                if(currentChar>=0 && currentChar<=9){
                     mp[currentChar]++;
                    if(mp[currentChar]==2){
                        // cout<<i<<" "<<j<<endl;
                        return false;
                    }
                }
            }
        }
        return true;
    }
     bool colChecker(vector<vector<char>>& board){
        for(int j=0;j<9;j++){
            int mp[10]={0};
            for(int i=0;i<9;i++){
                currentChar=board[i][j]-'0';
                // currentChar--;
                if(currentChar>=0 && currentChar<=9){
                     mp[currentChar]++;
                    if(mp[currentChar]==2){
                        // cout<<i<<" "<<j<<endl;
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool Boxes(vector<vector<char>>& board){
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(!subBoxes(board,i,j)){
                    return false;
                }
            }
        }
        return true;
    }
    bool subBoxes(vector<vector<char>>& board,int rPos,int cPos){
        int mp[10]={0};
        for(int i=rPos;i<rPos+3;i++){
            for(int j=cPos;j<cPos+3;j++){
                currentChar=board[i][j]-'0';
                // currentChar--;
                if(currentChar>=0 && currentChar<=9){
                    mp[currentChar]++;
                    if(mp[currentChar]==2){
                        // cout<<i<<" "<<j<<endl;
                        return false;
                    }
                }
            }
            // if(rPos==0 && cPos==6){
                // cout<<mp[1]<<endl;
            // }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        if(!rowChecker(board))
            return false;
        if(!colChecker(board))
            return false;
        if(!Boxes(board))
            return false;
        return true;
    }
};