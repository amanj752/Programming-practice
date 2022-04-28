#include<iostream>
using namespace std;

void Movetoend(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
}
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,5,0,0,8,0,9,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    Movetoend(arr,n);
    printArray(arr,n);
    
}


#include<iostream>
using namespace std;

void Movetoend(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,5,0,10,0,20};
    int n= sizeof(arr)/sizeof(arr[0]);
    Movetoend(arr,n);
    printArray(arr,n);
   return 0; 
}

#include <algorithm>
#include <iostream>
#include <vector>

void push_zeros_to_end(std::vector<int>& arr)
{
std::stable_partition(arr.begin(),
			arr.end(),
			[](int n) { return n != 0; });
}

int main()
{
std::vector<int> arr{1,9,8,4,0,0,2,7,0,6,0,9};

push_zeros_to_end(arr);

for(const auto& i : arr)
	std::cout << i << ' ';

std::cout << "\n";

return 0;
}
