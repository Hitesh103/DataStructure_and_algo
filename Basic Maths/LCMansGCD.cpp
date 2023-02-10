#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 5;
    int B = 10;
      int ans_GCD;
        for (int i=1;i<=min(A,B);i++){
            if(A%i == 0 and B%i ==0){
             ans_GCD = i;
            }
        }
        cout<<ans_GCD<<endl; 
        int LCM =  A * B / ans_GCD;
        cout << LCM << endl;

}