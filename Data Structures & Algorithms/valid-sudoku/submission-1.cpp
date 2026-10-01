class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<set<char>>> hashSet(3, vector<set<char>>(3));
        vector<set<char>> rows(9);
        vector<set<char>> col(9);
        
        for(int i=0;i<9;i++) {
            for(int j =0;j<9;j++) {
                if(board[i][j]=='.') continue;
                int setRowIndex = floor(i/3);
                int setColIndex = floor(j/3);
                set<char> set = hashSet[setRowIndex][setColIndex];
                if (set.find(board[i][j])!=set.end() 
                || rows[i].find(board[i][j])!=rows[i].end() 
                || col[j].find(board[i][j])!=col[j].end()) {
                     return false;
                }else {
                    hashSet[setRowIndex][setColIndex].insert(board[i][j]);
                    rows[i].insert(board[i][j]);
                    col[j].insert(board[i][j]);
                }
                
            }
        }
        return true;

    }
};
