//Finding frequency of each element in the array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    int freq[max + 1];//think about it
    for(int i = 0; i < max + 1; i++){
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++){
        int x = arr[i];
        freq[x] = freq[x] + 1;
    }

    for(int i = 0; i < max + 1; i++){
        if(freq[i] > 0){
            cout<<"The frequency of "<< i <<" is "<< freq[i]<<endl;
        }
    }


}