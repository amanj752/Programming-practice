#include<iostream>
using namespace std;

void rvereseArray(int arr[],int n)
{
    int low=0,high=n-1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;                                                // time complexity: Θ(n)
    }                                                           //aux space: Θ(1)
}  
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++){
   cout << arr[i] << " ";
   }
   cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rvereseArray(arr,n);  
    cout << "Reversed array is" << endl;
    printArray(arr, n);
    return 0;
}