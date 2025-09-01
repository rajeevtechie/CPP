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
        node *NewNode = new node(val);
        if(NewNode == NULL){
            head = tail = NewNode;
        }
        else{
            NewNode->next = head;
            head = NewNode;
        }
    }
    void insert(int val,int position){
        node *NewNode = new node(val);

        node *temp = head;
        for(int i=0; i<position-1; i++){
            if(temp == NULL){
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }
            //temp is not at position-1.
            NewNode->next = temp->next;
            temp->next = NewNode;  
    }

    void display(){
        node *temp = head;
        while(temp!=NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main(){
        list myList;
        myList.push_front(5);
        myList.push_front(4);
        myList.push_front(6);
        myList.push_front(65);
        myList.push_front(12);

        myList.insert(76,2);
        myList.insert(76,5);
        myList.display();
}
