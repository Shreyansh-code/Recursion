#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str, int i, int j){
    if(i>j){
        return;
    }
    else{
        swap(str[i],str[j]);
        i++;
        j--;
        reverseString(str, i, j);  
    }
    
}

int main(){
    string str="hello";
    int n=str.length();
    int i=0;
    int j=n-1;
    reverseString(str, i, j);
    cout<< str;
    return 0;
}