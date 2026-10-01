class Solution {
public:
    
    void print(unordered_set<char> s) {
        for(auto it: s )
        { 
         cout<<it;
         }
         cout<<endl;

    }
    bool isValidSudoku(vector<vector<char>>& board) {
         int size = board[0].size();
        vector<unordered_set<char>> rows(size);
        vector<unordered_set<char>> columns(size);
        vector<vector<unordered_set<char>>> squares(3, vector<unordered_set<char>>(3));

        for(int i =0;i<size;i++) {
          for(int j =0;j<size; j++) {
            if(board[i][j]=='.') continue;
            if(rows[i].find(board[i][j])!=rows[i].end()) return false;
            else
             rows[i].insert(board[i][j]);
          }
        }

        cout<<"ROWS "<<endl;
        for(auto itr: rows) {
        print(itr);
         cout<<endl;
        }
        
         for(int i =0;i<size;i++) {
          for(int j =0;j<size; j++) {
            if(board[j][i]=='.') continue;
            if(columns[i].find(board[j][i])!=columns[i].end()) return false;
            else
             columns[i].insert(board[j][i]);
          }
        }


        cout<<"COLUMNAS "<<endl;
        for(auto itr: columns) {
            for(auto it: itr )
        { 
         cout<<it;
         }
         cout<<endl;
        }

       for(int i =0;i<size;i++) {
          for(int j =0;j<size; j++) {
            if(board[i][j]=='.') continue;
            if(squares[i/3][j/3].find(board[i][j])!=squares[i/3][j/3].end()) return false;
            else
             squares[i/3][j/3].insert(board[i][j]);
          }
        }

        //    cout<<"SQ "<<endl;
        //   for(auto itr: squares) {
        //     for(auto it: itr )
        // { 
        //  cout<<it;
        //  }
        //  cout<<endl;
        // }

    return true;
    }
};
