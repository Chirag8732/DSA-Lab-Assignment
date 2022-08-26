#include <bits/stdc++.h>
using namespace std;

int insatbeg(int arr[],int n,int k){
    int arr2[k+1];
    for(int i=0;i<=k;i++){
        if(i==0){
           arr2[i]=n; 
        }else{
            arr2[i]=arr[i-1];
        }
    }
    for(int i=0;i<=k;i++){
        arr[i]=arr2[i];
    }
    return 1;
}
int main(){
    int n,b;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>b;

    int p = insatbeg(arr,b,n);
    
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}