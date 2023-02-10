/*
  Given array a of N integers. Given Q queries and in each query given a number X , print count of that number in aaray.

  constraints
  1 <= N <= 10^5
  1 <= a[i] <= 10^7
  1 <= Q <= 10^5
*/

#include <bits/stdc++.h>
using namespace std;
const int N =  1e7 + 10;
int hsh[N];

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        // int ct = 0;
        // for (int i = 0; i < n; ++i)
        // {
        //     if (a[i] == x)
        //     {
        //         ct++;
        //     }
        // }
        // cout << ct << endl;
        cout << "Count : - " << hsh[x] << endl;
    }
}

// old
// Time complexity : o(N) + O(Q * N) = O(N ^2) , this will not run in one second coc it's 10^10 but in one second only 10^7 works
// Here we will use hashing array 

// New
// Time Compele : O(N) + O(Q) = O(N) = 2 * 10^5 

// This is called Pre-computation where we have alredy computed the count number to reduce the time complexity