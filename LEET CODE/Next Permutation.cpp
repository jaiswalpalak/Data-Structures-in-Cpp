//O(n)

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index1;
        int index2;
        
        //finding the element smaller than its next element
        for(index1 = n-2; index1>=0; index1--){
            if(nums[index1] < nums[index1+1]){
                break;
            }
        }
        //reversing if its decending array
        if(index1<0){
            reverse(nums.begin(), nums.end());
        }
        else{
            for(index2 = n-1; index2>=0; index2--){
                if(nums[index2] > nums[index1]){
                    break;
                }
            }
            swap(nums[index1], nums[index2]);
            reverse(nums.begin()+index1+1, nums.end());
        }
        
    }
