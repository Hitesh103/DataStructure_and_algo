#include<bits/stdc++.h>
using namespace std;

void f(string str, int i , string output){

    // base case
    if(i==str.length()){
        cout << output << endl;
        return;
    }

    f(str,i+1,output+str[i]);
    f(str,i+1,output);
}

int main(){
    string str;
    cin>>str;

    f(str,0,"");
    return 0;
}