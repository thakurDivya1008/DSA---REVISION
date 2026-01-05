#include<bits/stdc++.h>
using namespace std;

//Brute Force
int large(vector<int>&arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
//T.C -> O(nlogn)
//S>C -> O(1)

//Optimized 

int largeEle(vector<int>&arr){
    int largest = arr[0];
    for(int i = 0; i<arr.size(); i++){
        if(largest < arr[i]){
            largest = arr[i];
        }
    }
    return largest; 
}

//T.C -> O(n)
//S.C -> O(1)
int main(){
  vector<int>arr = {2,5,3,1,7,2};


  cout<<"The largest element within array is :" <<largeEle(arr);

  return 0;
}
