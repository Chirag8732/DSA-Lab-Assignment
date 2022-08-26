 #include <bits/stdc++.h>
using namespace std;

int  srch(int arr[],int a,int b){
    int c=0;
    for(int i=0;i<b;i++){
        if(arr[i]==a){
            return i+1;
        }else{
            c=1;
        }
    }
    return -1;
}
int main(){
    int a,b,d;
    
    cin>>a;
    int arr[a+1];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    cin>>b;
    cout<<srch(arr,b,a);
    
    return 0;
}
