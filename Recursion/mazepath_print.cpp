//Print All Maze Path to reach at last element in 2D Matri
#include<bits/stdc++.h>
using namespace std;

void f(int i,int j,int m, int n, string output){

    // base case
    if(i==m-1 && j==n-1){
        cout << output << endl;
        return;
    }
    if(i>=m || j>=n){
        return;
    }

    f(i+1,j,m,n,output+"R");
    f(i,j+1,m,n,output+"D");
}

int main(){
    int m,n;
    cin>>m>>n;

    f(0,0,m,n,"");
    return 0;
}