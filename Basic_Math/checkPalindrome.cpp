#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
int number = n;
  int reverse_no = 0;
    while(n){
        int digit = n%10;
        n = n/10;
        reverse_no = (reverse_no *10) +digit;
    }

    if(reverse_no == number)
    cout<<"Entered no.is a Palindrome no.";
    else 
    cout<<"Not a Palindrome no.";
    return 0;

}