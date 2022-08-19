#include <iostream>
using namespace std;

void fourth()
{
   cout<<"I am fourth"<<endl; 
   
}

void third()
{
   cout<<"I am third"<<endl; 
   fourth();
}

void second()
{
   cout<<"I am second"<<endl; 
third();
}

void first()
{
   cout<<"I am First"<<endl; 
   second();
}
int main()
{
    first();
}
