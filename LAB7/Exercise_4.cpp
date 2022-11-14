#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int d;
    Node *l;
    Node *r;
    Node(int d){
        this->d = d;
        this->r = NULL;
        this->l = NULL;
    }
};

Node* search_node(Node* rt, int value){
    if (rt == NULL || rt->d == value){
       return rt;
     }    
    if (rt->d < value){
       return search_node(rt->r, value);
    }
    return search_node(rt->l, value);
}


Node* insert_node(Node* rt, int value)
{
    Node* ins = new Node(value);
    if (!rt){
        rt = ins;
        return rt;
    }
    Node* pre = NULL;
    Node* temp = rt;
    while (temp) {
        if (temp->d > value){
            pre = temp;
            temp = temp->l;
        }
        else if (temp->d < value){
            pre = temp;
            temp = temp->r;
        }
    }
    if (pre->d > value){
        pre->l = ins;
    }
    else{
        pre->r = ins;
    }
        return temp;
}


Node* delete_node(Node* rt, int value){

    if (rt == NULL){
        return rt;
    }
  
    if (rt->d > value){
        rt->l = delete_node(rt->l, value);
        return rt;
    }
    else if (rt->d < value){
        rt->r = delete_node(rt->r, value);
        return rt;
    }

    if (rt->l == NULL){
        Node* temp = rt->r;
        delete rt;
        return temp;
    }
    else if (rt->r == NULL){
        Node* temp = rt->l;
        delete rt;
        return temp;
    }

    else{
        Node* new_parent = rt;
        Node* next = rt->r;
        while (next->l != NULL){
            new_parent = next;
            next = next->l;
        }
 
        if (new_parent != rt){
            new_parent->l = next->r;
        }
        else{
            new_parent->r = next->r;
        }

        rt->d = next->d;

        delete next;
        return rt;
    }
}
  
int find_minimum(Node* rt){  
    while(rt->l != NULL){  
        rt = rt->l;  
    }  
    return rt->d;  
}  

Node *take_input(){

    int d;
    cout << "d:";
    cin >> d;
    if (d == -1){
        return NULL;
    }
    Node *temp = new Node(d);
    cout << "Enter left child of " << d << endl;
    Node *left_tree = take_input();
    cout << "Enter right child of " << d << endl;
    Node *right_tree = take_input();

    temp->l = left_tree;
    temp->r = right_tree;
    return temp;
}

void in_oreder(Node *rt){
    if (rt == NULL){
        return;
    }
    Node *temp = rt;
    stack<Node *> s;
    while (temp != NULL || !s.empty()){
        if (temp != NULL){
            s.push(temp);
            temp = temp->l;
        }
        else{
            temp = s.top();
            s.pop();
            cout << temp->d << " ";
            temp = temp->r;
        }
    }
}

int main(){
    Node* rt = take_input();
    cout << "Original : ";
    in_oreder(rt);
    insert_node(rt,12);
    cout<<endl;
    cout << "After insertion : ";
    in_oreder(rt);
    cout << endl;
    delete_node(rt,12);
    in_oreder(rt);
    cout<<endl;
    cout << "The minimum is : " << find_minimum(rt);

    return 0;
}