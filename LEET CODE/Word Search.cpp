bool exist(vector<vector<char>>& board, string word) {
        for(int i =0; i<board.size(); i++){
            for(int j =0; j<board[0].size(); j++){
                if(dfs(board, word, i, j, 0)){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board,string &word, int i, int j, int index){
        if(index == word.size()){
            return true;
        }
        if(i<0 || j<0 ||i>board.size() -1 || j>board[0].size()-1 ){ // boundary of the matrix
            return false;
        }
        if(board[i][j] != word[index]){    //don't match
            return false; 
        }
        
        //match!
        board[i][j] = '*';   //to avoid duplicates
        bool rest = dfs(board, word, i+1, j, index+1) ||  //up
                    dfs(board, word, i-1, j, index+1) ||  //down
                    dfs(board, word, i, j+1, index+1) ||  //right
                    dfs(board, word, i, j-1, index+1);  //left
        
        board[i][j] = word[index];
        return rest;
    }
