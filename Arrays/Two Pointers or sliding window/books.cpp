#include<iostream>
using namespace std;

int main(){
    int n, total_time;
    cin>>n>>total_time;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int total_time_consumed = 0;
    int maximum_books_read = 0;

    int j = 0;
    for(int i = 0; i < n; i++){
        total_time_consumed = total_time_consumed + a[i];
        maximum_books_read++;

        if(total_time_consumed > total_time){
            total_time_consumed = total_time_consumed - a[j];
            j++;
            maximum_books_read--;
        }
    }
    cout<<maximum_books_read<<endl;
}