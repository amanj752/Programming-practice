#include<iostream>
using namespace std;

void leftRotateone(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftRotate(int arr[], int n, int d){
    for(int i=0;i<d;i++){
        leftRotate(arr,n);
    }
}
int printArray(int arr[], int size){               // Timecomplexity: Θ(n)
    for(int i=0;i<size;i++){                        //space complexity Θ(1)
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[]={1,2,3,4,5};
   int n= sizeof(arr)/sizeof(arr[0]);
   leftRotateone(arr,n);
   leftRotate(arr,n);
   printArray(arr,n);
   return 0;
}

#include<iostream>
using namespace std;

void leftRotateone(int arr[],int n, int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}

int printArray(int arr[], int size){               // Timecomplexity: Θ(n)
    for(int i=0;i<size;i++){                        //space complexity Θ(d)
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[]={1,2,3,4,5};
   int n= sizeof(arr)/sizeof(arr[0]);
   leftRotateone(arr,n,2);
   printArray(arr,n);
   return 0;
}


#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void leftRotate(int arr[], int d, int n)                        //timecomplexity: Θ(n)
{
	if (d == 0)                                                   //space complexity:Θ(1)
		return;

	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;
	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}

