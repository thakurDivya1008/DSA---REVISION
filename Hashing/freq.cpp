#include<bits/stdc++.h>
using namespace std;

void cntFreq(int arr[], int n){
    unordered_map<int,int>map;
    for(int i = 0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }

    //Max Frequency and low frequency elemnet 

    int maxFreq = 0, minFreq = n;
    int maxele = 0, minele = 0;

    for(auto it : map){
        int ele = it.first;
        int freq = it.second;
        
        if(freq > maxFreq){
            maxFreq = freq;
            maxele = ele;
        }

        if(freq < minFreq){
            minFreq = freq;
            minele = ele;
        }
    }

    cout <<" The highest frequency element : "<<maxele << endl;
    cout<<"The lowest frequency element is : "<<minele << endl;

}
int main(){
    int arr[] = {2,4,2,5,6,3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cntFreq(arr,n);
    return 0;
    

}
//T.C -> O(n)
//S.C -> O(n)