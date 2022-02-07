#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n==0||n==1){
        return true;
    }

    if(arr [n]<arr[n-1]){
        return false;
    }
    else{
        bool restOfArray = isSorted(arr, n-1);
        return restOfArray;
    }

   
}

int main(){
    int arr[5]={2,4,13,8,10};
    int n=5;
    
    bool ans = isSorted(arr, n);
    cout<< ans;
    return 0;
}