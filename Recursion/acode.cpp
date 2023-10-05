#include<bits/stdc++.h>
using namespace std;

// Problem - ACODE, which stands for "Alphabetic Code," is a classic problem. The problem is to print possible decodings of a given string of digits, testcase - 25114, output - BEAN, BEAAD, YAN, YAAD, YKD, BEKD

void f(string &s, int n, int i,string output){
    if(i == n){
        cout<<output<<endl;
        return;
    }

    if(i == n-1){
        int one = s[i] - '0';
        f(s,n,i+1,output+(char)(one + 64));
    }else{
        int one = s[i] - '0';
        string pair;
        pair += s[i];
        pair += s[i+1];
        int two = stoi(pair);
        f(s,n,i+1,output+(char)(one + 64));
        if(two <= 26){
            f(s,n,i+2,output+(char)(two + 64));
        }
    }
}

int main(){
    string s;
    cin>>s;

    int n = s.length();
    f(s,n,0,"");
}