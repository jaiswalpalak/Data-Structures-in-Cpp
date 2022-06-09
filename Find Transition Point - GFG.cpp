int transitionPoint(int arr[], int n) {
 int low = 0, high = n-1,mid,result=-1;
   while(low<=high) {
       mid = low + (high - low)/2;
       if(arr[mid] == 1) {
           result = mid; high = mid-1;
       }
       else if(arr[mid] == 0) 
           low = mid + 1;
   }
   return result;
    // code here
}
