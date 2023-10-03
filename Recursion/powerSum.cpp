#include <bits/stdc++.h>
using namespace std;
 
int result = 0;

void f(int X, int N ,int i){
    int p = (int) pow(i,N);
    //Base Case
     if(X == 0){
        result++;
        return;
     }
     if(i * i > X){
        return;
     }
     if(X<0){
        return;
     }
     
    
    f(X-p,N,i+1);
    f(X,N,i+1);
    
}

int powerSum(int X, int N) {
    f(X,N,1);
    return result;
}

int main()
{
    int X,N;
    cin>>X>>N;
    cout<<powerSum(X,N);
    return 0;
}
