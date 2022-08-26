/******************************************************************************

Write a function replatind(linked_list,position,element) to replace an element in
the linked_list at the specified position.

*******************************************************************************/
 
#include<bits/stdc++.h>
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
void replatind(Node* &linked_list,int position,int val){
	 int i=0;
	 Node* temp = linked_list;
	 
	while(temp!=NULL){
		if(position==i){
		temp->data = val;
		}
		temp=temp->next;
		i++;
	}
	
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
	int val;
	int position;
	//Enter the position which you replacing with element
	cin>>position;
	//Which element you add in end of list
	cin>>val;
	addvalues(linked_list, 1);
	addvalues(linked_list, 2);
	addvalues(linked_list, 3);
	addvalues(linked_list, 4);
	cout<<"Before"<<endl;
	display(linked_list);
	cout<<endl;
	replatind(linked_list,position+1, val);
	cout<<"After"<<endl;
	display(linked_list);
	return 0;
}
