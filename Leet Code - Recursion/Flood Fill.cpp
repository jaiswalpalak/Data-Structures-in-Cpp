class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        
        if(oldColor == color){
            return image;
        }
        int n = image.size();
        int m = image[0].size();
        floodFillHelper(sr,sc,color,image,oldColor,n,m);
        return image;
    }
    
    void floodFillHelper(int i, int j, int color, vector<vector<int>>& image, int oldColor, int n, int m){
        if(i<0 || j<0 || i==n || j==m || image[i][j] != oldColor){
            return;
        }
        image[i][j] = color;
        floodFillHelper(i+1,j,color,image,oldColor,n,m); //down
        floodFillHelper(i-1,j,color,image,oldColor,n,m);  //up
        floodFillHelper(i,j+1,color,image,oldColor,n,m); //right
        floodFillHelper(i,j-1,color,image,oldColor,n,m); //left
    }
};
