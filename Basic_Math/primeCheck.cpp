#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter a No. : ";
    cin>>n;
    int cnt = 0;

    for(int i = 1; i*i <= n; i++)
    {
       if(n % i == 0){
        cnt++;
        if(n/i % i == 0){
            cnt++;
        }
       }
    }

    if(cnt == 2) 
    cout<<"Entered No. is a Prime No.";
    else
    cout<<"Entered No. is not a prime no.";
    
    return 0;

}