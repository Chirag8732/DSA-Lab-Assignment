#include<iostream>
#include<math.h>
#include "Problem1.cpp"
using namespace std;


int ans(string s){
        string s1=s;
        Stack main;
        float final,a,b,c;
        int size2=s1.length();
        for(int i=0;i<size2;i++){
        
            if(s[i]>='0'&&s[i]<='9'){
                main.push(s[i]-'0');
            }else{
                int op2=main.top();
                main.pop();
                int op1=main.top();
                main.pop();
            
            
            switch(s[i])
            {
            case '+':
            main.push(op1+op2);
                break;
            case '-':
            main.push(op1-op2);
                break;
            case '*':
            main.push(op1*op2); 
                break;
            case '/':
            main.push(op1/op2);
                break;
            

            default:
                break;
                
                
            }
       
     }
        } 
        return main.top();
}

int main(){
    string s;
    cin>>s;
    cout<<ans(s);
    return 0;
}
