#include<bits/stdc++.h>
using namespace std;


struct Node
{
public:
    int data;
    int priority;
    Node *next;
    Node(int data,int priority)
    {
        this->data = data;
        this->priority = priority;
        next = NULL;
    }
};

 
class Pqueue{
    public:
    Node *Head;
    Pqueue(){
        this->Head = NULL;
    }

    bool isEmpty()
    {
        bool ans = true;
        if (Head != NULL)
            ans = false;
        return ans;
    }

    int length()
    {
        int cnt = 0;
        Node *temp = Head;
        while (temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    void enqueue(int d, int p){
        Node *temp = new Node(d,p);
        if (Head == NULL){
            Head = temp ;
            return;
        }
        Node *temp1;
        Node *temp2 = NULL;
        if (p < Head->priority)
        {
            temp->next = Head;
            Head = temp;
        }
        else {
            temp1 = Head;
            while (temp1 != NULL && p >= temp1->priority)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            temp->next = temp2->next;
            temp2->next = temp;
            
        }
    }


    void dequeue(){
        Node *temp = Head;
        Head = Head->next;
        free(temp);
        
    }

    void display(){
        Node *temp = Head;
        while (temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Pqueue p6;
    p6.enqueue(190,2);
    cout << p6.length() << endl;
    p6.enqueue(120,9);
//    obj.display();
   p6.dequeue();
   p6.display();
   cout << endl;
   p6.enqueue(54,5);
   p6.display();
   cout << endl << p6.length();
    return 0;
}
