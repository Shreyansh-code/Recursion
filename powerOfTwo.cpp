#include <iostream>
using namespace std;

int power(int n){
    //base case
    if(n==0){
        return 1;
    }
     
    return 2* power(n-1);
}

int main(){
    int n=10;
    

    int ans = power(n);
    cout<< ans;
    return 0;
}