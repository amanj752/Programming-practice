// Efficient approach

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])                     //Time complexity: o(n)
        return false;
    }
    return true;
}
int main(){
    int arr[]={100,20,200};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,n);
}

// Naive method

#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                return false;                            //Time complexity: o(n^2)
            }
        }
    }
    return true;
}
int main(){
    int arr[]={8,12,15};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr,n);
}