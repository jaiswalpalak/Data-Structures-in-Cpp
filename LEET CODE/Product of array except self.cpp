//Time = O(n)
//Space = O(n)

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> fromBegin(n);
        vector<int> fromEnd(n);
        fromBegin[0] = 1;
        fromEnd[0] = 1;
        for(int i =1; i<n; i++){
            fromBegin[i] = fromBegin[i-1]*nums[i-1]; 
            fromEnd[i] = fromEnd[i-1]*nums[n-i];
        }
        
        vector<int> ans(n);
        for(int i =0; i<n; i++){
            ans[i] = fromBegin[i]*fromEnd[n-1-i];
        }
        return ans;
            
    }

//Time = O(n)
//Space = O(n)

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int fromBegin = 1;
        int fromEnd = 1;
        vector<int> ans(n,1);
        for(int i =0; i<n; i++){
            ans[i] *= fromBegin;
            fromBegin *= nums[i];
            ans[n-1-i] *= fromEnd;
            fromEnd *= nums[n-1-i];
        }
        return ans;
            
    }
