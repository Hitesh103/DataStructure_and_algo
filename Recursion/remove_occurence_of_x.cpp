#include<bits/stdc++.h>
using namespace std;

void f(string str, int i , vector<char> &output){

    // base case
    if(i==str.length()){
        for (int i = 0; i < output.size(); i++)
        {
            cout << output[i];
        }
        
        return;
    }
    if(str[i] == 'x'){
        f(str,i+1,output);
    }else{
        output.push_back(str[i]);
        f(str,i+1,output);
    }

}

int main(){
    string str;
    cin>>str;
    vector<char> output;
    f(str,0,output);
    return 0;
}