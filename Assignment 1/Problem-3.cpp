#include <iostream>
#include<math.h>
using namespace std;


int addup(int n)
{
  int a;                                                           
  if(n==0){
     return 0;
    }
    
    return n+addup(n-1);
    
   
}


int main()
{
    int a ;
    cin>>a;
   
        if(a>=0 && a-ceil(a)==0){
    	cout<<addup(a);
	}else{
		cout<<"enter the valid number";
	}


}
