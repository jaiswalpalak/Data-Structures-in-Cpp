int firstMissingPositive(vector<int>& nums) {
        for(int i =0; i<nums.size(); i++){
            while(nums[i]>0 && nums[i]<=nums.size() && nums[i] != nums[nums[i] - 1]){
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        for(int i =0; i<nums.size(); i++){
            if(nums[i] != i+1){
                return i+1;
            }
        }
        return nums.size() +1;
    }


//for explaination : https://leetcode.com/problems/first-missing-positive/discuss/767105/Short-C%2B%2B-O(n)-time-O(1)-space-oror-Steps-explained
