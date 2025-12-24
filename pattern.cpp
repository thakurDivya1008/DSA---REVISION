#include<bits/stdc++.h>
using namespace std;

// 1. ****
//    ****
//    ****
//    ****  
 
void first_pattern(int n){

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<" * ";
        }

        cout<<endl;
    }
}


// 2. *
//    * *
//    * * *
//    * * * *

void sec_Pattern(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

// 3. 1
//    1 2
//    1 2 3
//    1 2 3 4

void third_pattern(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
          cout<<j;
        }
        cout<<endl;
    }
}


// 4. 1
//    22
//    333
//    4444

void fourth_pattern(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
          cout<<i;
        }
        cout<<endl;
    }
}

// 5. * * * *  
//    * * *
//    * *
//    *

void fifth_Pattern(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n-i+1; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

//6. 12345
//   1234
//   123
//   12
//   1

void pattern6(int n)
{
      for(int i = 1; i<=n; i++){
        for(int j = 1; j<= n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    } 
}

// 7.
//     *    
//    ***
//   *****
//  *******
// *********

void pattern7(int n)
{

    for(int i = 0; i<n; i++){

        //Space

        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        //Star
        for(int j = 0; j < (2*i)+1; j++){
            cout<<"*";
        }

        //Space
        for(int j = 0; j< (n-i-1); j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

// 8.
// *********
//  *******
//   *****
//    ***
//     *

void pattern8(int n){
     for(int i = 0; i<n; i++){

        //Space

        for(int j = 0; j<i; j++){
            cout<<" ";
        }

        //Star
        for(int j = 0; j < 2*n-(2*i+1); j++){
            cout<<"*";
        }

        //Space
        for(int j = 0; j<i; j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

// 9. 
//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

// Combination of 7 and 8.

// 10.
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void Pattern10(int n){

    for(int i = 1; i<= 2*n -1; i++){
        int stars = i;
        if(i > n) stars = 2*n-i;

        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//11.
// 1
// 10
// 101
// 1010
// 10101

void pattern11(int n){
    int start = 1;
    for(int i = 0; i<n; i++){
        if(i % 2 == 0) start = 1;
        else start = 1;

        for(int j = 0; j<=i; j++){
            cout<<start;
            start = 1 - start;
        }

        cout<<endl;
    }
}

//12.
// 1     1
// 12   21
// 123 321
// 12344321
void pattern12(int n){
    for(int i=1; i<=n;i++){
        //numbers
        for(int j=1; j<= i; j++){
            cout<<j;
        }

        //space

        for(int j=1; j<2*n - 2*i; j++){
            cout<<" ";
        }  
         for(int j=i; j>=1; j--){
            cout<<j;
        }
        
        cout<<endl;
    }
}

//13.


// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21   

void pattern13(int n){
    int count = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

//14.
// A 
// A B
// A B C
// A B C D
// A B C D E
void pattern14(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//15.
// ABCDE
// ABCD
// ABC
// AB
// A
void pattern15(int n){
    for(int i = 0; i<n; i++){
        char ch = 'A';
     for(int j = 0;j< n- i;j++){
        
        cout<<ch;
        ch++;
     }
     cout<<endl;
    }
}
//16.
// A 
// B B
// C C C
// D D D D
// E E E E E

void pattern16(int n){
    for(int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(int j = 0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//17.

//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
void pattern17(int n){
    for(int i = 0; i<n; i++){

        //Space

        for(int j = 0; j<n-i-1; j++){
            cout<<" ";
        }

        //characters
        char ch = 'A';
        int breakPoint = (2*i + 1)/2;
        for(int j = 0; j < (2*i)+1; j++){
            cout<<ch;
            if(j< breakPoint) ch++;
            else ch--;
        }

        //Space
        for(int j = 0; j< (n-i-1); j++){
            cout<<" ";
        }

        cout<<endl;
    }
}

//18
void pattern18(int n){
    for(int i = 1; i<=n; i++){
        char ch = 'A' + (n-i);
        for(int j = 1; j<=i; j++){
            cout<<ch;
            ch++;
        }
  cout<<endl;
    }
}
int main(){
    int n;
      cout<<"Enter the number :";
      cin>>n;

    //   first_pattern(n);

    //   cout<<endl;

    //   sec_Pattern(n);

    //   cout<<endl;
    //   third_pattern(n);
    //   cout<<endl;
    //   fourth_pattern(n);
    //   cout<<endl;
    //   fifth_Pattern(n);
    //   cout<<endl;
    //   pattern6(n);
 
    // pattern7(n);
    

    // pattern8(n);
    // Pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
   
    // pattern14(n);
//  pattern15(n);
//    pattern16(n);
// pattern17(n);
pattern18(n);
      return 0;


}