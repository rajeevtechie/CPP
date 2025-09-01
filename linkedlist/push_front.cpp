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
    node* head;
    node* tail;

public:
    list(){
        head = NULL;
        tail = NULL;
    }

    void insert_begin(int val){
        node* newNode = new node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
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
int main() {
    list myList; // Create a list object
    myList.insert_begin(10);
    myList.insert_begin(5);
    myList.display();
    return 0;
}