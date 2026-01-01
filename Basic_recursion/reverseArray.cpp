#include<bits/stdc++.h>
using namespace std;
void reverse_arr(int arr[], int i, int n){

    if(i >= n/2){
        return;
    }

    swap(arr[i], arr[n-i-1]);

    reverse_arr(arr, i+1, n);
}
int main(){
    int n;
    cout<< "Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of array :";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    reverse_arr(arr,0,n);
    cout<<"Reversed array is as:";
    for(int i = 0; i<n; i++){
       cout<<arr[i]<<" ";
    }

  return 0;
}