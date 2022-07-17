//O(n)

int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() -1;
        int ans = INT_MIN;
        
        while(start< end){
            int width = end-start;
            int h = min(height[start], height[end]);
            int area = h*width;
            ans = max(ans, area);
            if(height[start]> height[end]){
                end--;
            }
            else if(height[end] > height[start]){
                start++;   
            }
            else{
                start++;
                end--;
            }
        }
        return ans;
    }
