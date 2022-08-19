  #include <iostream>

using namespace std;


 

int Product(int Array[], int n)
{

    if (n == 0)
        return 1;
   else
        return Array[n] * Product(Array, n - 1);

}

int main()
{
 
  int n;
  cin>>n;
  int Array[n];
    
  for(int i=0;i<n;i++){
     cin>>Array[i];
  }
 cout<<Product(Array,n-1);
 return 0;
 
}



