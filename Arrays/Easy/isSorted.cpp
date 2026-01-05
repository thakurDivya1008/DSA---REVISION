#include<bits/stdc++.h>
using namespace std;

bool sorted(vector<int>&arr){
    for(int i = 1; i<arr.size(); i++){
        if(arr[i] < arr[i-1]){
            return false;

        }
    }
    return true;
}
int main(){
vector<int>arr1 = {2,5,3,1,7,2};
 vector<int>arr2 = {1,2,6,7,9};

 cout<<"Array is sorted ? "<<sorted(arr1) <<endl;
 cout<<"Array is aorted ?"<<sorted(arr2);
 return 0;
}