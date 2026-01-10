#include<bits/stdc++.h>
using namespace std;


//brute force
void moveZeros(int n, vector<int>arr){


    vector<int>temp;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    int m = temp.size();

    for(int i = 0; i<m; i++){
        arr[i] = temp[i];
    }

    for(int i = m; i<n; i++){
        arr[i] =0;
    }

    
}

void moveZeros1(vector<int>&arr){
    int j = 0;
    for(int i = 0; i< arr.size(); i++){
        if(arr[i] != 0){
            arr[j++] = arr[i];
        }
    }

    while(j < arr.size()){
        arr[j++] = 0;
    }
}

int main(){

    vector<int>arr = {1,2,0,6,-4,0, 3};

 moveZeros1(arr);
 for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
 }

 return 0;

}