#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){
        //base case
        if(b==0){
            return 1;
        }
        if(b==1){
            return a;
        }
        int ans=power(a,b/2);
        
        //if b is even
        if(b%2==0){
            return ans*ans;
        }
        else{
            return a*ans*ans; 
        }
    }
    


int main(){
    int a=3;
    int b=10;
    int ans= power(a,b);
    cout<<ans;
    return 0;
}