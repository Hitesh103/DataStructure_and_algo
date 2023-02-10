#include<iostream>
using namespace std;

void printAllPairs(int arr[],int n){
        for(int i=0;i<n;i++){
            int x = arr[i];
            for(int j=i+1;j<n;j++){ // for all previous pair (j = 0 to j<n j++)
                cout<<"("<<x<<","<<j<<")"<<endl;
            }
            cout<<endl;
        }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    printAllPairs(arr,n);

}