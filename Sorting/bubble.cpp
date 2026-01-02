#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
  for(int i = n- 1; i>= 0; i--){

    int didSwap = 0;
    for(int j = 0; j<=i-1; j++){
          if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
          }
    }

    if(didSwap == 0){
        break;
    }
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
    bubbleSort(arr,n);

    cout<<"The sorted ellements are as :";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  return 0;
}

//T.C -> O(n^2) in worst case and O(n) in best case
//S.C -> O(1)