#include<iostream>
using namespace std;

int factorial(int n){
	int b;
	cout<<"line " <<n<<endl;
	if(n>=0 && n%1!=0){
    	
    cout<<"Error"; 
    	
	}else{
		
		if( n == 0||n==1){
    	cout<<"1 or 0 done"<<endl;
        return 1;
    }
    b=factorial(n-1)*n;
    cout<<"line 17 : "<<b<<endl;
    return b;
	}
   return 0;
}

int main(){
    int n;
    cin >> n;
    factorial(n);
    return 0;
}
