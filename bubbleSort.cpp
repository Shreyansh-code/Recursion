#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
        //base case
        if(n==0||n==1){
            return;
        }
        //processing
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        //recursive call
        bubbleSort(arr,n-1);
    }
    


int main(){
    int arr[5]={2,8,3,13,5};
    int n=5;
    bubbleSort(arr,n);
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}