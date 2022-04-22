//Efficient Approach
#include<iostream>
using namespace std;

int getLargest(int arr[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return res;
}
int main(){
    int arr[]={20,5,2,4};
    cout<<getLargest(arr,4);
    return 0;
}

// time complexity o(n)