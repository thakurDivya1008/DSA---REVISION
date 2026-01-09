#include<bits/stdc++.h>
using namespace std;

//Brute Force

void solve(int arr[], int n){
    int temp[n];
    for(int i = 1; i<n; i++){
        temp[i-1] = arr[i];
    }
    temp[n-1] = arr[0];
    for(int i = 0; i<n; i++){
        cout<<temp[i]<<" ";;
    }

    cout<<endl;
}

//T.C -> O(n)
//S.C -> O(n)


// 2nd Approach 

void rotate1(int arr[], int n){
    int temp = arr[0];

    for(int i = 1; i < n; i++){
        arr[i-1] = arr[i];
    }

    arr[n - 1] = temp;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";;
    }

    cout<<endl;
}

//T.C -> O(n)
//S.C -> O(1)



int main(){

    int n = 5;
    int arr[5] = {1,2,3,4,5};

    solve(arr,n);
    rotate1(arr,n);

    return 0;
    
}