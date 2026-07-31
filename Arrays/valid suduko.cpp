class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>>boxes(9);
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                char num=board[row][col];
                if(num=='.')continue;
                int boxIndex = (row/3)*3+(col/3);
                if((rows[row].find(num)!=rows[row].end())||
                (cols[col].find(num)!=cols[col].end())||
                (boxes[boxIndex].find(num)!=boxes[boxIndex].end())){
                    return false;
                }
                rows[row].insert(num);
                cols[col].insert(num);
                boxes[boxIndex].insert(num);

            }
        }
     return true;   
    }
};