#include<bits/stdc++.h>
using namespace std;
int cntDig(int n){
    int cnt = 0;
    while(n){
        n = n/10;
        cnt++;
    }
    return cnt;
}
//Another way
int cnt(int n){
    int count = (int)(log10(n) + 1);
    return count;
}
int main(){
    int n; 

    cout<<"Enter a number:";
    cin>>n;
    int ans = cnt(n);

    cout<<"The no. of digits for the given number is :"<< ans;
    return 0;
}

//T.C : O(log10(n))