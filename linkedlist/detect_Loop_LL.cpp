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
public:
    node* head;
    node* tail;

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

    bool detect_loop(node *head){
        node* slow = head;
        node *fast = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout << "Cycle exists\n";
                return true;
            }
        }
        cout << "Cycle doesn't exist\n";
        return false;
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
    myList.insert_begin(2);
    myList.insert_begin(1); //1 -> 2 -> 5 -> 10 -> NULL
    
    myList.tail->next = myList.head;
    myList.detect_loop(myList.head);
    
    return 0;
}