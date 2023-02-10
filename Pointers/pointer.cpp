#include<bits/stdc++.h>
using namespace std;

int main(){
    int x =4;
    int *p_x = &x;
    cout<< "Address X :" << &x << endl;
    cout<< "val p_x :" << &p_x << endl;
    cout<< "val *p_x :" << &*p_x << endl; // = p_x
    cout<< p_x<< endl;

    *p_x = 4;
    cout << "X :" << x << endl;
    cout << "p_x + 1" << p_x + 1 << endl; //It will add 4

    // Double Pointers

    int **p_p_x = &p_x;
    cout<< "Address p_x :" << &p_x << endl;
    cout << "val p_p_x :"<< p_p_x << endl;
    cout << "val *p_p_x :" << *p_p_x << endl;
    **p_p_x = 9;
    cout << "x :" << x << endl;
}
