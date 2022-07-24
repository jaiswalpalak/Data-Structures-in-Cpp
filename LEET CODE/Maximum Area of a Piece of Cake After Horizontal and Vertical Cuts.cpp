int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int maxHcuts = horizontalCuts[0];
        int maxVcuts = verticalCuts[0];
        
        for(int i = horizontalCuts.size()-1; i>=1; i--){
            int maxcurr = horizontalCuts[i] - horizontalCuts[i-1];
            maxHcuts = max(maxcurr, maxHcuts);
        }
        for(int i = verticalCuts.size()-1; i>=1; i--){
            int maxcurr = verticalCuts[i] - verticalCuts[i-1];
            maxVcuts = max(maxcurr, maxVcuts);
        }
        return (1LL*maxHcuts*maxVcuts)% 1000000007;  //making it long long so it will be in range      
    }
