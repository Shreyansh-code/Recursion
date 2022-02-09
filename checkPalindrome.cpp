#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    
    if(str[i]!=str[j]){
        return false;
    }
    else{  
        return checkPalindrome(str, i+1, j-1); 
    }   
}

int main(){
    string str="aabbccbbaa";
    int n=str.length();
    int i=0;
    int j=n-1;
    bool ans = checkPalindrome(str, i, j);
    cout<< ans;
    return 0;
}