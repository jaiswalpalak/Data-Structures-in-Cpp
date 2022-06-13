
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        sort(arr,arr+n);
        int missing =1;
        for(int i=0;i<n;i++){
            if(arr[i] == missing){
                missing++;
            }
        }
        return missing;
        // Your code here
    } 
};
