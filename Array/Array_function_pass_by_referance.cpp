#include <iostream>
using namespace std;

void printArray(int arr[]) // pass by reference - we are passing the address
{
    cout << "In function " << sizeof(arr) << endl;
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<endl;;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);

    cout << "In Main" << sizeof(arr);
    printArray(arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<endl;
    }

    return 0;
}