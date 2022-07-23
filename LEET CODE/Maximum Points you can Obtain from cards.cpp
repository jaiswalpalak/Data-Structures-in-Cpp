int maxScore(vector<int>& cardPoints, int k) {
        int res = 0;
        
        //add first k elements in our window
        for(int i =0; i<k; i++){
            res += cardPoints[i];
        }
        
        int curr = res;
        for(int i = k-1; i>=0; i--){
            //removing last element 
            curr -= cardPoints[i];
            curr += cardPoints[cardPoints.size() -k+i];
            
            //maximum possible combination
            res = max(res,curr);
        }
        return res;
    }


//For reference : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/discuss/2198002/C%2B%2B-Solution-Using-Sliding-Window
