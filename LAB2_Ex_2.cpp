/** 
Write a function insatind(array,position,element) to insert an element into an array
at the specified index (position).

**/
#include <bits/stdc++.h>
using namespace std;

void insatind(int arr[],int a,int b,int c){
    int arr2[c];
    for(int i=0;i<c;i++){
        if(i<a-1){
            arr2[i]=arr[i];
        }else if(i==a-1){
            arr2[i]=b;
        }else{
            arr2[i]=arr[i-1];
        }
    }
    for(int i=0;i<c;i++){
        arr[i]=arr2[i];
    }
}
int main(){
    int a,b,d;
    //Enter the length of array
    cin>>a;
    int arr[a+1];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    //Enter the position
    cin>>b;
    //Enter the Element
    cin>>d;
    if(b>a && b<=0){
        cout<<"Please,Enter valid position";
    }else{
    insatind(arr,b,d,a+1);
    for(int i=0;i<=a;i++){
        cout<<arr[i]<<" ";
    }}
    return 0;
}