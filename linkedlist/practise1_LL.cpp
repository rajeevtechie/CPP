//Find and remove the nth node from the end.

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

    int size_LL(){
        node *temp = head;
        int size = 0;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        return size;
    }

    void remove_nth(int n){

        int size = size_LL();
        node *prev = head;
        for(int i=1; i<(size-n); i++){ //i=size-n=>deletion node prev
            prev = prev->next;
        }

        node *toDel = prev->next;
        cout << "Deleting: " << toDel->data << endl;

        prev->next = prev->next->next;
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
    list l1;
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.display(); //1 -> 2 -> 3 -> 4 -> 5 -> NULL

    l1.remove_nth(4);
    l1.display(); //1 -> 3 -> 4 -> 5 -> NULL
}