/** 
Write a function delatind(array,position) to delete the element at the specified
index (position) in the array.

**/

#include <bits/stdc++.h>
using namespace std;

int delatind(int arr[],int a,int c){
    int ac=0;
    int arr2[c];
    for(int i=0;i<c;i++){
        if(arr[i]==a){
            ac=1;
            break;
        }else{
            
        }
    }
    if(ac==0){
        return -1;
    }
    for(int i=0;i<c-1;i++){
        if(i<a-1){
            arr2[i]=arr[i];
            
        }else{
            arr2[i]=arr[i+1];
        }
    }
    for(int i=0;i<c-1;i++){
        arr[i]=arr2[i];
    }
    return 1;
}
int main(){
    int a,b,d;
    
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;

    int p = delatind(arr,b,a);
    if(p==-1){
        cout<<"position is not present"<<endl;
    }else{
    for(int i=0;i<a-1;i++){
        cout<<arr[i]<<" ";
    }}
    return 0;
}
