#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int minimum_index = -1;
    for(int i = 0; i < n - 1; i++){
        minimum_index = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minimum_index]){
                minimum_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minimum_index];
        arr[minimum_index] = temp;
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
}