#include<bits/stdc++.h>
using namespace std;
//Brute
int secLarge1(vector<int>&arr){
   sort(arr.begin(), arr.end());
   int largest = arr[arr.size() - 1];

   for(int i = arr.size()-2; i>=0; i--){
    if(arr[i] != largest){
        return arr[i];
    }
   }

   return -1;
}

//T.C -> O(nlogn + n)
//S.C -> O(1)


//Better

int secLarge2(vector<int>&arr){
    int largest = arr[0];

    for(int i = 0; i<arr.size(); i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
     int seclarge = -1;
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] > seclarge && arr[i] != largest){
            seclarge=arr[i];
        }
    }

    return seclarge;
}

//T.C -> O(2n)
//S.C -> O(1)


//Optimized 

int secLarge3(vector<int>&arr){
    int large = arr[0], seclarge = -1;
    for(int i =0; i<arr.size(); i++){
        if(arr[i] > large){
           
            seclarge = large;
             large = arr[i];
        }

        else if(arr[i] < large && arr[i] > seclarge){
            seclarge = arr[i];
        }
    }
  return seclarge;
    
}


int secsmallest(vector<int>&arr){
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    
    for(int i = 0; i<arr.size(); i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
 return ssmallest;
}



int main(){
   vector<int>arr = {1,4,2,6,4,7,3};
  cout<<"The second largest element for this array is :"<<secLarge3(arr);

  cout<<"The second smallest element is : "<<secsmallest(arr);
  return 0;
}