#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n ,int target){

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);

    int target;
    cin>>target;

    int index = linear_search(arr,target,n);
    if(index!=-1){
        cout<<target << " is at index "<<index<<endl;
    }
    else
    {
        cout<< target << " is not found "<<endl;
    }
    

    
}