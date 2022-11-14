#include <bits/stdc++.h>
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

void pre_order(Node *rt){
    if (rt == NULL){
        return;
    }
    stack<Node *> s;
    s.push(rt);

    while (!s.empty()){
        Node *temp = s.top();
        s.pop();
        cout << temp->d << " ";

        if (temp->r){
            s.push(temp->r);
        }
        if (temp->l){
            s.push(temp->l);
        }
    }
}

void post_order(Node *rt){
    if (rt == NULL){
        return;
    }
    stack<Node *> s;
    Node *temp = rt;
    Node *prev = NULL;
    while (temp != NULL || !s.empty()){
        if (temp != NULL){
            s.push(temp);
            temp = temp->l;
        }
        else{
            temp = s.top();
            if (temp->r == NULL || temp->r == prev){
                cout << temp->d << " ";
                s.pop();
                prev = temp;
                temp = NULL;
            }
            else{
                temp = temp->r;
            }
        }
    }
}

void in_order(Node *rt){
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

Node *take_input(){
    int d;
    cout << "Data : ";
    cin >> d;
    if (d == -1)
        return NULL;
    Node *temp = new Node(d);
    cout << "Enter l child of " << d << endl;
    Node *lTree = take_input();
    cout << "Enter r child of " << d << endl;
    Node *right_tree = take_input();

    temp->l = lTree;
    temp->r = right_tree;
    return temp;
}

int main(){
    Node *rt = take_input();
    pre_order(rt);
    in_order(rt);
    post_order(rt);

    return 0;
}