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
        node *newnode = new node(val);

        if(head == NULL){
            head = tail = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
    }

    void pop_back(){
        if(head == NULL){
            cout << "Linkedlist is empty." << endl;
        }
        node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL; //temp = tail's previous 
        delete tail;
        tail = temp;
    }


    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    
};

int main(){
    list l1;
    l1.push_front(5);
    l1.push_front(6);
    l1.push_front(7);
    l1.push_front(8);
    cout << "Before pop_back" << endl;
    l1.display(); // 8 -> 7 -> 6 -> 5 -> NULL
    cout << "After 2 pop_back(): ";
    l1.pop_back();
    l1.pop_back();

    l1.display(); //8 -> 7 -> NULL
    
}