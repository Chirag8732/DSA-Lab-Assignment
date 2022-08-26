/**
Write a function lsrch(linked_list,element) that searches a linked list for the
element and returns the index (position) in the linked lsit if the element is found, and
-1 otherwise.
**/

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
int isrch (Node* &linked_list, int element){
	int position = 0;
	Node* temp = linked_list;
	while(temp != NULL){
		if(temp->data==element){
			return position+1;
		}
		temp = temp->next;
		position = position +1;
	}
	return -1;
}
int main(){
	Node* linked_list=NULL;
	int element;
	//  element you want to search
	cin>>element;
	addvalues(linked_list, 1);
	addvalues(linked_list, 2);
	addvalues(linked_list, 3);
	addvalues(linked_list, 4);
	cout<<isrch(linked_list, element);
	return 0;
}