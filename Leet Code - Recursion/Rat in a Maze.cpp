class Solution{
    public:
    
    void findPathHelp(int i, int j, int n, vector<vector<int>> &m, string &path, vector<string> &ans){
        if(i<0 || j<0 ||i==n || j==n || m[i][j] == 0){
            return;
        }
        else if( i==n-1 && j == n-1){
            ans.push_back(path);
            return;
        }
        else{
            m[i][j] = 0;
            //DOWN
            path.push_back('D');
            findPathHelp(i+1,j,n,m,path,ans);
            path.pop_back();
            
            //LEFT
            path.push_back('L');
            findPathHelp(i,j-1,n,m,path,ans);
            path.pop_back();
            
            //RIGHT
            path.push_back('R');
            findPathHelp(i,j+1,n,m,path,ans);
            path.pop_back();
            
            //UP
            path.push_back('U');
            findPathHelp(i-1,j,n,m,path,ans);
            path.pop_back();
            
            
            m[i][j] = 1;
        }
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string path;
        findPathHelp(0,0,n,m,path,ans);
        return ans;
        
    }
};
