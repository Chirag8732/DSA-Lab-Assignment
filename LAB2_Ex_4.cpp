/**

Write a function insatend(array,element) that inserts an element at the end of an
array.

**/
#include <bits/stdc++.h>
using namespace std;

int insatend(int arr[],int a,int k){
    int arr2[k+1];
    for(int i=0;i<=k;i++){
        if(i==k){
           arr2[i]=a; 
        }else{
            arr2[i]=arr[i];
        }
    }
    for(int i=0;i<=k;i++){
        arr[i]=arr2[i];
    }
    return 1;
}
int main(){
    int a,b;
    
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;

    int p = insatend(arr,b,a);
    
    for(int i=0;i<=a;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}