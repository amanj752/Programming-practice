#include<iostream>
using namespace std;
void leaders(int arr[], int n){
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=true;                              //timecomplexity: o(n^2)
                break;
            }
        }
        if(flag==false){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
   int arr[]={10,20,30};
   int n= sizeof(arr)/sizeof(arr[0]);
   leaders(arr,n);
   return 0;
}


#include<iostream>
using namespace std;
void leaders(int arr[], int n){
  int curr_lead=arr[n-1];
  cout<<curr_lead;
  for(int i=n-2;i>=0;i--){
      if(curr_lead<arr[i]){
          curr_lead=arr[i];
          cout<<curr_lead;                                //  time complexity: Θ(n)
     }
  }
}

int main(){
   int arr[]={10,20,30};
   int n= sizeof(arr)/sizeof(arr[0]);
   leaders(arr,n);
   return 0;
}
