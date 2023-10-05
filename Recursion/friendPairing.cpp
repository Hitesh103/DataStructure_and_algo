#include<bits/stdc++.h>
using namespace std;

// Given n frinds each one can remain single or can be paired up with some other friend. Each friend can be paired only once. Find out the total number of ways in which friends can remain single or can be paired up.
// Input  : n = 3
// Output : 4

int f(int n){
    if(n == 1 or n == 2 ){
        return n;
    }
    return f(n-1) + (n-1)*f(n-2);
}

int main(){
    int n;
    cin>>n;

    cout<<f(n);
}