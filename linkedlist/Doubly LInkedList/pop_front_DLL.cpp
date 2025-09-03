#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    node *head;
    node *tail;

public:
    DoublyList(){
        head = tail = NULL;
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

    void pop_front(){
        node *temp = head;

        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }

        temp->next = NULL;
        delete temp;
        
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
    dll.push_front(7);
    dll.push_front(6);
    dll.push_front(5);
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    cout << "Before pop_front(): " << endl;
    dll.display(); //1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> NULL

    dll.pop_front();
    dll.pop_front();

    cout << "After two pop_front: " << endl;
    dll.display(); //3 -> 4 -> 5 -> 6 -> 7 -> NULL
}