#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string revv_str;

    for (int i = str.size(); i >=0; --i)
    {
        // revv_str = revv_str + str[i];
        // we don't have to do this because we are adding charcter to a string and this is not a good practice
        
        // we can use
        revv_str.push_back(str[i]);
    }
    cout<<revv_str<<endl;
    
}


// For pelindrome just compare the reverse string with original string
