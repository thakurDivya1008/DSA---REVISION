#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"All divisors of n is as:";
// for(int i = 1; i<=n/2; i++){
//     if(n % i == 0){
//         cout<< i << " ";
//     }
// }
// cout<<n;

//Another way
//i<= sqrt(n); --> instead of it usen i*i <= n
vector<int>ls;
for(int i = 1; i*i<=n;  i++){
    if(n%i == 0){
        ls.push_back(i);

        if(n/i != i){
            ls.push_back(n/i);
        }

    }
}

sort(ls.begin(), ls.end());
for(auto it: ls) cout<< it << " ";
return 0;
}