#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter two numbers you want to find the gcd:";
    cin>>n1>>n2;
    int gcd = 1;
    // for(int i = 1; i<= min(n1,n2); i++){
    //      if(n1%i == 0 && n2%i == 0 ){
    //         gcd = i;
    //      }
    // }
    //Time Complexity :- O(min(n1,n2))

    //Another way
    // for(int i = min(n1,n2); i>=1; i--){

    //     if(n1%i == 0 && n2%i == 0){
    //         gcd = i;
    //         break;
    //     }
    // }

    //Time complexity = O(min(n1,n2));


    //Euclidean theorem :
    // it says:
    // gcd( n1, n2) = gcd(n1 - n2, n2) .., where n1 > n2

    //gcd(a,b) == gcd(a%b, b)
    // (greater % smaller) ---> if one of them is zero then other one is their gcd


    while(n1 > 0 && n2 > 0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2 % n1;
    }

    if(n1 == 0) gcd = n2;
    else gcd = n1;

// Time Complexity :- O(log(min(n1,n2)))
    cout<<"GCD is :"<<gcd;
    return 0;

}