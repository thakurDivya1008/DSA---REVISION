#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : " ;
    cin>>n;
    int number = n;
    int armNo  = 0;
    while(n){
     int digit = n%10;
     n = n/10;
     armNo = armNo + (digit*digit*digit);
    }

    if(number == armNo){
      cout<<"No. is Armstrong No.";
    }
    else
    cout<<"Not an armstrong no.";
    return 0;
}