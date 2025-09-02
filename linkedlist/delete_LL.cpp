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

    ~node(){
        if(next!=NULL){
            cout << "~Node " << data << endl;
            delete next;
            next = NULL;
        }
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
    void display() {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    }

    ~list(){
        cout << "~list" << endl;
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }
};

int main(){
    list l1;
    l1.push_front(5);
    l1.push_front(8);
    l1.push_front(1);
    l1.push_front(2);
    l1.display();
}