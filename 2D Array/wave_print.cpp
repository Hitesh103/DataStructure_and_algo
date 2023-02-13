#include <bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][10], int n, int m)
{

    vector<int> res;
    int wave = 1;
    int col = n - 1;

    /* m 	- Ending row index
    n 	- Ending column index
    col 	- Iterator
    wave 	- for Direction
    wave = 1 - Wave direction down
    wave = 0 - Wave direction up   */

    while (col > 0)
    {

        // Check whether to go in
        // upward or downward

        if (wave == 1)
        {

            // Print the element of the matrix
            // downward since the value of wave = 1

            for (int row = 0; row < m; row++)
            {
                res.push_back(arr[row][col]);
            }

            col--;
            wave = 0;
        }
        else
        {

            // Print the elements of the
            // matrix upward since the value
            // of wave = 0

            for (int row = m - 1; row >= 0; row--)
            {
                res.push_back(arr[row][col]);
            }

            col--;
            wave = 1;
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}

int main()
{

    // Print in wave form
    int arr[][10] = {
        {1, 2, 3, 4},
        {12, 13, 14, 5},
        {11, 16, 15, 6},
        {10, 9, 8, 7}};

    int n = 4, m = 4;

    wavePrint(arr, n, m);
}