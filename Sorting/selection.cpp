#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
   for(int i = 0; i<n; i++){
    int mini = i;
    for(int j =i; j<=n; j++){
        if(arr[j] < arr[mini]){
            mini = j;
        }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
   }
}
int main(){
 
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i= 0; i<n; i++){
        cin >> arr[i];
    }
    selectionSort(arr,n);

    cout<<"The sorted ellements are as :";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}


//T.c -> n * (n + 1)/2 -> O(n^2)