#include <bits/stdc++.h>
using namespace std;
 
void quickSort(int arr[], int start, int end) {

      int i = start, j = end;

      int tmp;

      int pivot = arr[(start + end) / 2];

 

      /* partition */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };

 

      /* recursion */

      if (start < j)

            quickSort(arr, start, j);

      if (i < end)

            quickSort(arr, i, end);

}
 
 
int main()
{
   int n;
   cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  quickSort(arr,0, n);
 
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
   
  return 0;
}
 
 
 

