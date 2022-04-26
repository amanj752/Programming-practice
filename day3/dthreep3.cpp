// Naive approach

#include<iostream>
using namespace std;
int remDept(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];                       
            res++;                                          Time complexity:o(n)
        }                                                   Space: o(n)
    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;
}
 int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = remDept(arr,n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

Effecient approach
#include<iostream>
using namespace std;

int remDep(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;                                      Time complexity:o(n)
        }                                               Space: o(1)
    }                               
    return res;
}

int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = remDep(arr,n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}

