#include<iostream>
using namespace std;

void print(int arr[][10],int n,int m){

    //4 variables
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    // outer loop (traverse array boundary)
    while(startCol <= endCol and startRow <= endRow){

        //Start row
        for(int col = startCol; col<=endCol; col++){
            cout << arr[startRow][col] << " ";
        }
     
        //End col
        for(int row = startRow + 1; row<=endRow; row++){
            cout << arr[row][endCol];
        }

        //end row
        for(int col = endCol-1; col>=startCol; col--){
            if (startRow == endRow)
            {
                break;
            }
            
            cout << arr[endRow][col] << " ";
        }

        //Start column
        for(int Row = endRow+1; Row>=startRow; Row++){
            //Avoid Duplicates Printing of elements
            if(startCol==endCol){
                break;
            }
            cout << arr[Row][startCol] << " ";
        }

        //update the variable to point to inner loop
    }

}

int main(){

    //Print in spiral form
    int arr[][10]={
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };

    int n = 4,m = 4;

   print(arr,n,m);

}