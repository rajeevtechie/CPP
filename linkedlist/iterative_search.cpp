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

    int search(int key){
        node *temp = head;
        int index = 0;
        while(temp->next->next  != NULL){
            if(temp->data == key){
                return index;
            }
            temp = temp->next;
            index++;
        }
        return -1;
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
    l1.push_front(6);
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.display(); //1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL

    int position = l1.search(3); //index = 2
    cout << "Key is found at index: " << position << endl;
}