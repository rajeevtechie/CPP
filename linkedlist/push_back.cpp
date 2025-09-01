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

    void insert_last(int val){
        node *NewNode = new node(val);

        if(head == NULL){
            head = tail = NewNode;
        }
        else{
            tail->next = NewNode;
            tail = NewNode;
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
};

int main(){
    list myList;
    myList.insert_last(5);
    myList.insert_last(6);
    myList.display();
}

