int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int leftSmall[n];
        int rightSmall[n];
        for(int i =0; i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            
            if(st.empty()){
                leftSmall[i] = 0;
            }
            else{
                leftSmall[i] = st.top()+1;
            }  
            st.push(i);
        }
        //clearing the stack to reuse it
        while(!st.empty()){
            st.pop();
        }
        
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                rightSmall[i] = n-1;
            }
            else{
                rightSmall[i] = st.top() - 1;
            }
            st.push(i);
        }
        int maxAns = 0;
        for(int i =0; i<n; i++){
            maxAns = max(maxAns, (rightSmall[i] - leftSmall[i] + 1)*heights[i]);
        }
        
        return maxAns;
        
    }
