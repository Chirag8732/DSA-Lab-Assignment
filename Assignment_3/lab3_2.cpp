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
    
    void clear( int value){
    
    for(int i = 0; i < colume; i++){
    for(int j = 0; j < row; j++){
        arr[i][j]=value;
        p[{i,j}]=value;
            }
        }
    }
    void getitem(int i1,int i2 ){
        if(i1>=colume && i1>=row){
            cout<<"invalid row or colume so we can't getitem"<<endl;
        }else{
        for(int i = 0; i < colume; i++){
            for(int j = 0; j < row; j++){
                if(i==i1 && j==i2){
                cout<<arr[i][j]<<endl;
                exit;
                }
            }
        }}    
    }
    
    void setitem(int i1,int  i2, int value1){
        if(i1>=colume && i1>=row){
            cout<<"invalid row or colume so we can't seritem"<<endl;
        }else{
        for(int i = 0; i < colume; i++){
            for(int j = 0; j < row; j++){
                if(i==i1 && j==i2){
                 arr[i][j]=value1;
                 p[{i,j}]=value1;
                exit;
                }
            }
        }}      
    }
    void listprint(){
    for(auto c : p){
        cout<<c.first.first<<" "<<c.first.second<<" "<<c.second;
    }}
    void arprint(){
        for(int i=0;i<colume;i++){
            for(int j=0;j<row;j++){
                cout<<m[{i,j}];
            }
            cout<<endl;
        }
    }
};

int main() {
 
 int r,c;
 cin>>r;
 cin>>c;

  Array2D myObj;     // Create an object of MyClass
  myObj.Array2D1(r,c);  // Call the method
  int value,value1;
  cin>>value;
  int i1,i2;
  cin>>i1>>i2;
  cin>>value1;
  cout<<myObj.numRows()<<endl;
  cout<<myObj.numCols()<<endl;
  
   myObj.clear(value);
  myObj.getitem(i1-1,i2-1 );
 
  myObj.setitem(i1-1, i2-1, value1);
   myObj.arprint();
  return 0;
}