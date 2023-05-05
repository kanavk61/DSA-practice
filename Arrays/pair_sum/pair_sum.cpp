#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 4, 5, 6, 8, 10};
    int n = sizeof(a)/sizeof(int);
    int sum = 11;
    int i = 0, j = n - 1;
    while(i < j){
        if(a[i] + a[j] == sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        } else if(a[i] + a[j] < sum){
            i++;
        } else {
            j--;
        }
    }
}