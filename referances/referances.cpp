#include <bits/stdc++.h>
using namespace std;

void increment(int &n, int n1)
{
    n++;
    n1++;
}

// Here we can see when we passeed parameter in increament functon where
//&n shows the passed by value which means it is not a copy of  'a' variavle so we don't need to return it

int incre(int k, int l)
{
    k++;
    l++;
    return k, l;
}

// if we had used n instead if &n then it iś passed by referace it means we had to return value without return they won't affect the main parameter a and b

void func(int h[10])
{
    h[0] = 9;
    // Array doesn't follow this arras always paases by referance
}

int main()
{
    int a = 3;
    int b = 5;
    int c = 54;
    int d = 41;
    int h[10];
    h[0] = 3;
    cout << a << " " << b << endl;
    incre(a, b);
    increment(c, d);
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;

    cout << h[0] << endl;
    func(h);
    cout << h[0];
}
