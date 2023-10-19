//The concept of shifting as there may be negative elements in the array
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

    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        maximum = max(arr[i], maximum);
        minimum = min(arr[i], minimum);
    }

    int freq[maximum - minimum + 1];
    for(int i = 0; i < n; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++){
        int x = arr[i];
        freq[x - minimum] = freq[x - minimum] + 1;
    }

    for(int i = 0; i < maximum - minimum + 1; i++){
        if(freq[i] > 0){
            cout<<"The frequency of the element " << i + minimum << " is " << freq[i] << endl;
        }
    }

}