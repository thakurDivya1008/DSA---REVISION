#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
     map<int,int>mpp_arr;
    // unordered_map map<int,int>mpp_arr;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
         mpp_arr[arr[i]]++;
    }
    // map<int,int>mpp_arr;
    // for(int i = 0; i<n; i++){
    //     mpp_arr[arr[i]]++;
    // }

    //Map store all the values in sorted order.

    for(auto it : mpp_arr){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp_arr[number]<<endl;
    }

    return 0;

}

//Time Complexity :
//Map:
//storing | fetching -> (logN) > Best, worst, Average

//unordered map
//storing | fetching -> best|Avg -> O(1)
//for worst case it took -> O(n)

//Hashing -> 
//Division Method 
//Folding Method 
//Mid square method 

