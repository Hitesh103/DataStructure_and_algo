#include<bits/stdc++.h>
using namespace std;

int divisor(int n){
    
    for(int i = 0; i < n;i++){
       if(n%i == 0){
        return i;
    }
    }
}

int main(){
    int n = 15;
    divisor(n);
    cout << divisor(n) << endl;
}