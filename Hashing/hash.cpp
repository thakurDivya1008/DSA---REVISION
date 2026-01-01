#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }


    //PreCompute
    //lets take array elements as max 15.


    //Here you can take array size max upto -> 10^6(Inside main function)
    //or 10^7 (for globally declaration)
    
    int h[15] = {0};
    for(int i = 0; i<n; i++){
        h[arr[i]] += 1;

    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<h[number]<<endl;
    }
   
   return 0;
}