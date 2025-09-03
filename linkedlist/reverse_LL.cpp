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

    void reverse(){
        node *curr = head;
        node *prev = NULL;

        while(curr != NULL){
            node *next = curr->next;
            curr->next = prev;

            //updations for next itr
            prev = curr;
            curr = next;
        }

        head = prev;

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
    l1.push_front(10);
    l1.push_front(9);
    l1.push_front(8);
    l1.push_front(7);
    l1.push_front(6);
    l1.push_front(5);

    l1.display();
    l1.reverse();

    l1.display(); //prints the reversed linkedlist.
}