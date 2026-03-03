class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row[9],col[9],box[9];
        //Traverse each cell of the board
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char curr = board[i][j];
                //ignore the empty cells
                if(curr =='.'){
                    continue;
                }
                //calculate the box index
                int boxIndex = (i/3)*3+(j/3);
                //check if number already exists or not
                if(row[i].count(curr)||col[j].count(curr)||box[boxIndex].count(curr)){
                    return false;
                }
                //insert the number into row, column and box
                row[i].insert(curr);
                col[j].insert(curr);
                box[boxIndex].insert(curr);
            }
        }
        return true;
    }
};