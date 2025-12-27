#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int num = 0;
    while(n){
        int digit = n%10;
        n = n/10;

        num = (num * 10) + digit;
    }
    return num;
}
int main(){
 int n;
 cout<<"Enter the number you want to reverse:";
 cin>>n;
 int ans = reverse(n);
 cout<<"Reversed number is :"<< ans;

}