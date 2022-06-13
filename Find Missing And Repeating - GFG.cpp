class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        sort(arr,arr+n);
        int *ans = new int[2];
        int missing = 1;
        for(int i=0; i<n;i++){
            if(arr[i] == missing){
                missing++;
            }
        }
        ans[1] = missing;
        int N= 1e6+2;
        int temp[N];
        for(int i=0; i<N;i++){
            temp[i] = 0;
        }
        for(int i=0;i<n;i++){
            temp[arr[i]]+=1;
        }
        for(int i=0;i<N;i++){
            if(temp[i]==2){
                ans[0] = i;
                break;
            }
        }
        return ans;
    }
};
