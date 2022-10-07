#include<bits/stdc++.h>
using namespace std;


void bubbleSort(int *input, int size)
{

	for(int j = 0; j < size - 1; j++) {
		for(int i = 0; i < size - 1-j; i++) {
			if(input[i] > input[i+1]) {
				int temp = input[i];
				input[i] = input[i+1];
				input[i+1] = temp;
			}
		}
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
  
  bubbleSort(arr,n);
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  return 0;
}

