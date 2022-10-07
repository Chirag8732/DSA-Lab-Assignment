#include <bits/stdc++.h>
using namespace std;
 
int binarySearch(int arr[], int num,int low, int high)
{
    if (high <= low)
       return (num > arr[low]) ?(low + 1) : low;
       
    int mid = (low + high) / 2;
   
    if (num == arr[mid])
        return mid + 1;
    if (num > arr[mid])
        return binarySearch(arr, num,
                            mid + 1, high);
    return binarySearch(arr, num, low,
                        mid - 1);
                       
             
}
 
void insertionSort(int arr[], int n)
{
    int i, location, j, k, s ;
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        s = arr[i];
       
        location = binarySearch(arr, s, 0, j);
       
        while (j >= location)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = s;
    }
}
 
 
int main()
{
   int n;
   cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  insertionSort(arr, n);
 
  for(int i=0;i<n;i++){
    cout<<arr[i]<<"";
  }
   
  return 0;
}
 

