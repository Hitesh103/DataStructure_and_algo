#include<bits/stdc++.h>
using namespace std;

string compressString(string str){

    int n = str.length();
    int count = 0;
    string output;

    for(int i=0; i<n; i++){
        while(i<n-1 and str[i+1] == str[i]){
            count++;
            i++;
        } 
        output += str[i];
        output += to_string(count);
    }
    if(output.length() > str.length()){
        return str;
    }
    return output;
}

int main(){

    string s1 = "aaaabbbccddee";
    cout<<compressString(s1)<<endl;

    string s2 = "abcd";
    cout<<compressString(s2)<<endl;

}