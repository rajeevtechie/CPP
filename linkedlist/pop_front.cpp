#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{
    node *head;
    node *tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void push_front(int val){
        node *Newnode = new node(val);
        if(head == NULL){
            head = tail = Newnode;
        }
        else{
            Newnode->next = head;
            head = Newnode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "linkedlist is empty" << endl;
        }
        node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
 
    void display(){
        node *temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main(){
    list l1;
    l1.push_front(5);
    l1.push_front(6);
    l1.push_front(7);
    l1.push_front(8);
    l1.push_front(10);
    l1.push_front(11);
    //till here: 11->10->8->7->6->5->NULL
    l1.pop_front(); // 10->8->7->6->5->NULL
    l1.pop_front(); // 8->7->6->5->NULL
    l1.display();

    return 0;
}