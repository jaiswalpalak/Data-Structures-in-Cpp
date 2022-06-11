class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        if(d>n){
            d = d-n;
        }
        int count = 0;
        int eam[n];
        for(int i=d;i<n;i++){
            eam[i-d] = arr[i];
            count++;
        }
        for(int i=0; i<d;i++){
            eam[count] = arr[i];
            count++;
        }
        for(int i=0;i<n;i++){
            arr[i] = eam[i];
        }
        // code here
    }
};
