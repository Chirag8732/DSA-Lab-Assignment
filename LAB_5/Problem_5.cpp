#include <bits/stdc++.h>
using namespace std;
 
void merge(int input[],int s ,int mid,int e){
    
    int n1=mid-s+1;
    int n2=e-mid;
    
    
    int a[n1];
    int b[n2];
    
    
    for(int i=0;i<n1;i++){
        a[i]=input[s+i];
    }
    
	for(int i=0;i<n2;i++){
        b[i]=input[mid+1+i];
    }
    
    int i=0;
    int j=0;
    int k=s;
    
    while(i<n1&&j<n2){
        
        if(a[i]<b[j]){
            input[k]=a[i];
            k++;
            i++;
        }else{
            input[k]=b[j];
            k++;
            j++;
        }
 }
    
	while(i<n1){
		input[k]=a[i];
		k++;
		i++;   
    
}

    while(j<n2){
		input[k]=b[j];
		k++;
		j++;   
    }


}





void mergesort(int input[], int s, int e){
    if(s>=e){
        return;
    }
    
    int mid=(s+e)/2;
    
    mergesort(input,s,mid);
    mergesort(input,mid+1,e);
    merge(input,s,mid,e);
         
}
void mergeSort(int input[], int size){
	
    
    mergesort(input,0,size-1);
         
}

 
int main()
{
   int n;
   cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  mergeSort(arr, n);
 
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
   
  return 0;
}
 

