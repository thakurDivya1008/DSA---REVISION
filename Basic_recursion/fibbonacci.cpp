#include<bits/stdc++.h>
using namespace std;

int fibbo(int n){
    if(n <= 1){
        return n;
    }
    return fibbo(n-1) + fibbo(n-2);
}

int main(){
    int n;
   cout<<"Enter the number :";
   cin>>n;
   int res = fibbo(n);
   cout<<res;
   return 0;
}