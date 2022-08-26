/******************************************************************************
 
 Write a function linsatend(linked_list,element) that inserts an element at the end
of a linked list.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};
void addvalues(Node* &linked_list, int val){
	Node* new_node = new Node(val);
	if(linked_list==NULL){
		linked_list = new_node;
		return;
	}
	Node* temp = linked_list;
	while(temp->next != NULL){
		temp = temp ->next;
	}
	temp ->next = new_node;
}

void linsatend(Node* &linked_list,int element){
    Node* n = new Node(element);
      
    if(linked_list==NULL){
        linked_list=n;
        return;
    }
    Node* temp = linked_list;
    while(temp->next!=NULL){
    temp=temp->next;
    }
    temp->next=n;
}
void display(Node* linked_list){
	Node* temp = linked_list;
		while(temp!=NULL){
			if(temp->next==NULL){
				cout<<temp->data;
			}
		else{
		cout<<temp->data<<"->";
	}
		temp=temp->next;
	}
}


int main(){
	Node* linked_list=NULL;
	int element;
	//Which element you Add in Tail
	cin>>element;
	addvalues(linked_list, 1);
	addvalues(linked_list, 2);
	addvalues(linked_list, 3);
	addvalues(linked_list, 4);
	linsatend(linked_list,element) ;
    display(linked_list);
	return 0;
}