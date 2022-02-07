#include <iostream>
using namespace std;

int countStairs(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     
     int ans = countStairs(n-1)+ countStairs(n-2);
     return ans;
}

int main(){
    int n=5; 
    int ans=countStairs(n);
    cout<< ans;
    return 0;
}