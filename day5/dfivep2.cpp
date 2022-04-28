#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
        }                                               //timecomplexity:Θ(n^2)
    }
    return res;
}

int main(){
   int arr[]={2,3,10,6,4,8,1};
   int n= sizeof(arr)/sizeof(arr[0]);
   cout<<maxDiff(arr,n);
   return 0;
}


#include<iostream>
using namespace std;

int maxDiff(int arr[], int n){
    int res=arr[1]-arr[0],minval=arr[0];

    for(int j=1;j<n;j++){
        res=max(res,arr[j]-minval);
        minval=min(minval,arr[j]);           //timecomplexity: Θ(n)
    }
    return res;
}

int main(){
   int arr[]={2,3,10,6,4,8,1};
   int n= sizeof(arr)/sizeof(arr[0]);
   cout<<maxDiff(arr,n);
   return 0;
}
