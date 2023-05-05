#include<iostream>
using namespace std;
void MaxSumSubarray(int arr[], int n){
    int max_sum = INT_MIN;
    int low = 0, high = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum+=arr[k];
            }

            if(sum > max_sum){
                max_sum = sum;
                low = i;
                high = j;
            }
        }
    }

    for(int i = low; i <= high; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1, 2, -2, 3, 8, -4, -3};
    int n = sizeof(arr)/sizeof(int);
    MaxSumSubarray(arr, n);
    return 0;
}