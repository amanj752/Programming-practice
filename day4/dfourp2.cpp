#include<iostream>
using namespace std;

void arrRotate(int arr[], int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
  
}
int printArray(int arr[], int size){               // Timecomplexity: Θ(n)
    for(int i=0;i<size;i++){                        //space complexity Θ(1)
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[]={1,2,3,4,5};
   int n= sizeof(arr)/sizeof(arr[0]);
   arrRotate(arr,n);
   printArray(arr,n);
   return 0;
}