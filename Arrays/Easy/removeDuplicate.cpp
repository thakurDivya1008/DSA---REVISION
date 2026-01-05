#include<bits/stdc++.h>
using namespace std;

//Brute Force

int removeDuplicate1(vector<int>&arr){
    set<int>st;

    for(int i = 0; i<arr.size(); i++){
        st.insert(arr[i]);
    }
    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }

    return index;
}

int removeDuplicate2(vector<int>&arr){
    if(arr.empty()) return 0;
    int i = 0;
    
    for(int j = 1; j < arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
   return i+1;
}

int main(){
   vector<int>arr = {1,1,2,2,2,3,3,4};
   int k = removeDuplicate2(arr);
   cout<< "k = "<< k <<"\n Array after removing duplicates: ";
   for(int i = 0; i< k; i++){
    cout<<arr[i]<<" ";
   }
   return 0; 
}