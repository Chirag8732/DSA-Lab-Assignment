 #include <iostream>
#include<bits/stdc++.h>

using namespace std;
map<pair<int,int>,int> p;
class Array2D {         // The class
  public :
    int **arr;
    int row;
    int colume;
    
    void Array2D1(int r, int c)      // Method/function
    {
      this-> row=r;
      this-> colume=c;
      arr = new int*[c];
      for(int i=0;i<r;i++){
          arr[i] = new int[r];
      }
      
	for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin>>arr[i][j];
            if(arr[i][j]!=0){
                p[{i,j}] = arr[i][j];
            }
    }
}

  	
    }
    int numRows(){
        return row;
    }
    
    int numCols(){
        return colume;
    }
    
    void scaleby( int value){
    
    for(int i = 0; i < colume; i++){
    for(int j = 0; j < row; j++){
        if(p[{i,j}]!=0){
            p[{i,j}]=p[{i,j}]*value;
        }
            }
        }
    }
    void getitem(int i1,int i2 ){
        if(i1>colume && i2>row){
            cout<<"Invalid  "<<endl;
        }else{
        cout<<p[{i1,i2}]<<endl;
        }}    
    
    
    void setitem(int i1,int  i2, int value1){
        if(i1>colume && i2>row){
            cout<<"Invalid  "<<endl;
        }else{
        p[{i1,i2}]=p[{i1,i2}]*value1;
            
        }      
    }
    void listprint(){
    for(auto as : p){
        cout<<as.first.first<<" "<<as.first.second<<" "<<as.second;
    }}
    
    void arprint(){
        for(int i=0;i<colume;i++){
            for(int j=0;j<row;j++){
                cout<<p[{i,j}];
            }
            cout<<endl;
        }
    }
    void transpose(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                if(i==j){
                    array2[i][j]=p[{i,j}];
                }else{
                array2[i][j]=p[{j,i}];}
            }
        }
    }
    void add(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=p[{i,j}]+array2[i][j];
            }
        }
    }
    void subtract(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=p[{i,j}]-array2[i][j];
            }
        }
    }
    void multiply(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=p[{i,j}]*array2[i][j];
            }
        }
    }
};

int main() {
int **array1;
int **array2;
 
 int r,c;
 cin>>r;
 cin>>c;
    array1 = new int*[c];
      for(int i=0;i<r;i++){
          array1[i] = new int[r];
      }
      array2 = new int*[c];
      for(int i=0;i<r;i++){
          array2[i] = new int[r];
      }
  Array2D myObj;     // Create an object of MyClass
  myObj.Array2D1(r,c);  // Call the method
 
  for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin>>array2[i][j];
    }}
 
  myObj.add(array2);
  for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout<<array2[i][j]<<" ";
    }
        cout<<endl;
    }
  myObj.subtract(array2);
  myObj.multiply(array2);
  return 0;
}