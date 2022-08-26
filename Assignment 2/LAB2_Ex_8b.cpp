/******************************************************************************
 
Write a function delatend(linked_list) that deletes the last element of the linked
list.

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

Node* delatend(Node* &linked_list){
	Node* temp=linked_list;
	
   while(temp->next->next!=NULL){
    temp = temp->next;
}
     temp->next = NULL;
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
	addvalues(linked_list, 1);
	addvalues(linked_list, 2);
	addvalues(linked_list, 3);
	addvalues(linked_list, 4);
	delatend(linked_list);
    display(linked_list);
	return 0;
}