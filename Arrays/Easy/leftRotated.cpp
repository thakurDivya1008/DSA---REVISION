#include<bits/stdc++.h>
using namespace std;

//Brute Force
void leftRotate(int arr[], int n, int d){
    d = d%n;
    int temp[d];
    for(int i = 0; i<d; i++){
        temp[i] = arr[i];
    }

    for(int i = d; i<n; i++){
        arr[i-d] = arr[i];
    }

    for(int i = n - d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

// T.C -> O(d) + O(n-d) + O(d) -> O(n + d)

//S.C -> O(d)

//Optimal SOlution

void leftRotated(int arr[], int n, int d){
    reverse(arr, arr + d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

//T.C -> O(d) + O(n-d) + O(n) -> O(2n)->O(n);
//S.C -> O(1)

int main(){
    int n;
    cout<<"Enter the Size of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of Array: \n";

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the place you want to rotate the array :";

    cin>>d;

    leftRotated(arr,n, d);

    cout<<"Rotated array is as : \n";

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}