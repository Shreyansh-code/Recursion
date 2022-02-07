#include <iostream>
using namespace std;

int fibSeries(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
     
     int ans = fibSeries(n-1)+ fibSeries(n-2);
     return ans;
}

int main(){
    int n=10; 
    int ans=fibSeries(n);
    cout<< ans;
    return 0;
}