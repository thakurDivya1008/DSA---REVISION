#include<bits/stdc++.h>
using namespace std;

//Print name n times usin recursion

void printName(int n, string name){
    
  if(n <= 0){
    return;
  }
  cout<<name<<endl;;

  printName(n-1, name);
}

//T.C -> O(n)
//S.C -> O(n)

void print1toN(int n, int i){
  if(i>n){
    return;
  }
  cout<< i << endl;
  print1toN(n, i+1);
}

// T.C -> O(n)
// S.C -> O(n)

void printNto1(int n){
    if(n <= 0){
        return;
    }
    cout<< n << " ";
    printNto1(n-1);
}
int main(){
 int n;
 cout<<"Enter the number :";
 cin>>n;
//  string name;
//     cout<<"Enter your name : ";
//     cin>>name;
//  printName(n, name);

 //Print 1 To N Linearly
  
//  print1toN(n,1);

 //Print n to 1
 printNto1(n);
 
}
