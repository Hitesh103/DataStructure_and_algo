#include<bits/stdc++.h>
using namespace std;

// N < 100000
// a[i] < 100000

int main(){
    int n ; // O(1)
    cin >> n; // O(1)

    for(int  i = 0; i < n; i++){
        int a; //o(1)
       cin >> a; // O(1)
    } // This loop is for n so O(n)

    
    for(int  i = 0; i < n; i++){
        int a; //o(1)
       cin >> a; // O(1)
    } 

    
    for(int  i = 0; i < n; i++){
        int a; //o(1)
       cin >> a; // O(1)
    } 

}

// O(1) + O(1) + O(2*n) + O(2*n) + O(2*n) ,, O(2*n) = O(n)

// loop in loop has O(n^2)