#include<bits/stdc++.h>
using namespace std;


  vector<int>unionArr(vector<int>a, vector<int>b){
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int>uni;
    
    while(i<n && j<m){
       if(a[i] <= b[i]){
        if(uni.size() == 0 || uni.back() != a[i]){
            uni.push_back(a[i]);
        }
        i++;
       }

       else{
        if(uni.size() == 0 || uni.back() != b[j]){
            uni.push_back(b[j]);
        }
        j++;
       }
    }

    while(i < m){
       if(uni.size() == 0 || uni.back() != a[i]){
            uni.push_back(a[i]);
        }
        i++; 
    }

    while(j <n){

        if(uni.size() == 0 || uni.back() != a[j]){
            uni.push_back(a[j]);
        }
        j++;
    }
    return uni;
  }
int main(){
    int n1, n2;
    cout<<"Enter the size of first array : ";
    cin>>n1;

    int arr1[n1];
    cout<<"Enter the elements of first array : \n";
    for(int i = 0; i<n1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array : ";
    cin>>n2;

    int arr2[n2];
    cout<<"Enter the elements of second array : \n";
    for(int i = 0; i<n2; i++){
        cin>>arr2[i];
    }
// 1st Approach
    set<int>s;

    for(int i = 0; i<n1; i++){
        s.insert(arr1[i]);
    }

    for(int i = 0; i<n2; i++){
        s.insert(arr2[i]);
    }


    //T.C -> O(n1logn + n2logn) + O(n1 + n2)

    //S.C -> O(n1 + n2)

    cout<<"Union of two arrays is as follows : \n";

    for(auto it : s){
        cout<<it<<" ";
    }

    return 0;
}