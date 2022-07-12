vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i =0; i<numRows; i++){
            vector<int> minAns(i+1,1);
            for(int j =1; j<i;j++){
                minAns[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(minAns);        
        }
        return ans;
        
    }
