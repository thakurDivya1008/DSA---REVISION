#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cout<<"Enter the size of array : \n";
 cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the element to be searched : \n";

    cin>>key;
    int flag = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            cout<<"Element found at index : "<<i<<endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout<<"Element not found in the array \n";
    }
    return 0;
}