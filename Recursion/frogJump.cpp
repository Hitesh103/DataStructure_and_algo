#include<bits/stdc++.h>
using namespace std;

vector<int> height;

int f(int i,int n){
    // base case
    if(i==n){
        return 0; // We do not any cost to jump from N->N
    }
    if(i == n-1){ // we are at the second last position
        return f(i+1,n)+abs(height[i]-height[i+1]);
    }
    return min(f(i+1,n)+abs(height[i]-height[i+1]),f(i+2,n)+abs(height[i]-height[i+2]));
}

int main(){
    int n;
    cin>>n;

    // to make the height vector 1-indexed
    height.push_back(0);

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }       
    cout << f(1,n) << endl;
    return 0;
}