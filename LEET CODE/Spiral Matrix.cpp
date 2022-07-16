vector<int> spiralOrder(vector<vector<int>>& nums) {
        int row_start = 0;
        int row_end = nums.size()-1;
        int col_start = 0;
        int col_end = nums[0].size()-1;
        int n = nums.size() * nums[0].size();
        vector<int> ans;
        
        
        while(row_start <= row_end && col_start<=col_end){
            //for row start
            for(int col = col_start ; col<= col_end; col++){
                ans.push_back(nums[row_start][col]);
            }   
            
            row_start++;
            
            //for coloumn end
            for(int row = row_start; row<= row_end; row++){
                ans.push_back(nums[row][col_end]);
            }
            col_end--;
            
            //for row end
            for(int col = col_end; col>=col_start; col--){
                ans.push_back(nums[row_end][col]);
            }
            row_end--;
            
            //for column start
            for(int row = row_end; row>=row_start; row--){
                ans.push_back(nums[row][col_start]);
            }
            col_start++;
        }
        vector<int> spiral(n, 0);
        for(int i = 0; i<n; i++){
            spiral[i] = ans[i];
        }
        return spiral;
    }
