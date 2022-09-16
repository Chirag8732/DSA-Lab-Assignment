#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{

    int size1;
    Node* head;
    public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size1 = 0;
    }
    void push(int data){
        Node* node1 = new Node(data);
        if(head == NULL){
            head = node1;
            size1++;
        }else{
            node1->next = head;
            head = node1;
            size1++;
        }
    }
    int top(){
        if(head==NULL){
            return -1;
        }else{
        int main = head->data;
		return main;
		}
    }

    bool empty(){
        if(size1==0){
            return false;
        }else{
            return true;
        }
    }

    int size(){
        return size1;
    }

    void pop(){
        if(head==NULL){
            cout<<"Stake is empty"<<endl;
        }else{
            Node* temp= head;
            head = head->next;
            delete temp;
            size1--;
        }
    }
};
// int main(){
//     Stack main;
//     main.push(12);
//     main.push(15);
//
//     main.pop();
//     cout<<main.top();
//     return 0;
// }
