//O(2^n)

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> output;
        combination(1, n, k, output);
        return ans;
    }
    
    void combination(int i, int n, int k, vector<int> &output){
        if(i>n){
            if(k == 0){
                ans.push_back(output);
            }
            return;
        }
        
        //pick
        output.push_back(i);
        combination(i+1, n, k-1, output);
        output.pop_back();
        
        //not pick
        combination(i+1, n, k, output);
    }
};


//2nd approach

class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combine(int n, int k) {
        vector<int> output;
        combination(1, n, k, output);
        return ans;
    }
    
    void combination(int i, int n, int k, vector<int> &output){
        
        
        
            if(k == 0){
                ans.push_back(output);
                return;
            }
        
        if(k>n-i+1) return;
            
        if(i>n) return;
        
        
        
        //pick
        output.push_back(i);
        combination(i+1, n, k-1, output);
        output.pop_back();
        
        //not pick
        combination(i+1, n, k, output);
    }
};
