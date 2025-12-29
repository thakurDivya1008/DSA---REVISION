#include<bits/stdc++.h>
using namespace std;
//parameterized way
void sum(int n, int res){
    if(n <= 0){
        cout<< "Sum is :"<<res;
        return;
    }
    
    sum(n-1, res + n);

    

}
//functional

int add(int n){
    if(n == 0){
        return 0;
    }
    return n + add(n-1);
}
int main(){
  int n;
 cout<<"Enter a no. "<<endl;
 cin>>n;
//   sum(n,0);
 int ans = add(n);
 cout<<"Sum of n number is :"<<ans;
 return 0;
}