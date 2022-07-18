void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        //we will swap the diagonal elements
        for(int i =0; i<n; i++){
            for(int j =0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //after that reverse each row
        for(int i =0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
