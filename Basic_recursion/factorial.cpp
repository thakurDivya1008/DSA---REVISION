#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    if(n == 1 || n == 0){
        return 1;
    }

    return n * fact(n-1);


}

//T.C -> O(n)
//S.c -> O(n)

int main(){
    int n;
    cout<<"Enter no.  :";
    cin>>n;
    int res = fact(n);
    cout<<"Sum of n number is : "<< res;
    return 0;
}