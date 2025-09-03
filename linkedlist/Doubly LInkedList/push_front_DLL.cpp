#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *prev;

    node(int val){
        data = val;
        prev = next = NULL;
    }
};

class DoublyList{
    node *head;
    node *tail;

public:
    DoublyList(){
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
            head->prev = newnode;
            head = newnode;
        }
    }

    void display(){
        node *temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    DoublyList dll;
    dll.push_front(5);
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.display();

    return 0;
}