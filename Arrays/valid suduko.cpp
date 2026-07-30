class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n =board.size();
        for(int row =0;row<n;row++){
             unordered_set<char>st;
        
             for(int i =0;i<n;i++){
                if(board[row][i]=='.')continue;
                if(st.find(board[row][i])!=st.end()){
                    return false;
                    
                }
                st.insert(board[row][i]);
             }
            
        }
        for(int col=0;col<n;col++){
            unordered_set<char>st;
            for(int j=0;j<n;j++){
                if(board[j][col]=='.')continue;
                if(st.find(board[j][col])!=st.end()){
                    return false;
                }
                st.insert(board[j][col]);
            }
        }
        for(int row=0;row<n;row+=3){
            for(int col=0;col<n;col+=3){
                unordered_set<char>st;
                for(int i =row;i<row+3;i++){
                    for(int j=col;j<col+3;j++){
                        if(board[i][j]=='.')continue;
                        if(st.find(board[i][j])!=st.end()){
                            return false;
                        }
                        st.insert(board[i][j]);

                    }
                }
            }
        }
            
     return true; 
    }
};