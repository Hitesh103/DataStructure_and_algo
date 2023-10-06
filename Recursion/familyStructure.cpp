#include<bits/stdc++.h>
using namespace std;

//https://www.codingninjas.com/studio/problems/family-structure_981243
//https://www.spoj.com/problems/DCEPC504/


char f(char root, long long int n, long long int k) {
    if (n == 1) {
        return root;
    }
    long long int value = (1LL << (n - 1)) / 2; // 2^(n-1)/2

    if (k <= value) {
        // Go to left side
        return f(root, n - 1, k);
    } else {
        char new_root = (root == 'M') ? 'F' : 'M';
        return f(new_root, n - 1, k - value);
    }
}

int main(){
    long long int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

    char result = f('M', n, k);

    if (result == 'M') {
        cout<< "Male"<< endl;
    } else {
        cout<< "Female"<< endl;
    }

    }
    
}