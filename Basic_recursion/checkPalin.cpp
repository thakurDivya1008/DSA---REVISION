#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int i){
  if(i >= s.size()/2) return true;
  if(s[i] != s[s.size()-i-1]) return false;
  isPalindrome(s,i+1);
}
int main(){


  string s;
  cout<<"Enter the String: ";
  cin>>s;
  cout<<isPalindrome(s,0);

  return 0;




}

//T.C -> O(n/2)
//S.c -> O(n/2)
