//Doubly Linkedlist
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next = prev = NULL;
    }
};

class list {
public:
    node* head;
    node* tail;

    list() {
        head = tail = NULL;
    }

    void push_front(int val) {
        node* newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    void push_back(int val) {
        node* newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    void insert_intermediate_position(int val, int position) {
        node* newnode = new node(val);
        node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            if (temp == NULL) {
                cout << "Enter valid position." << endl;
                return;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL)
            temp->next->prev = newnode;
        temp->next = newnode;
        if (newnode->next == NULL)
            tail = newnode;
    }

    int iterative_search(int target) {
        node* temp = head;
        int index = 0;
        while (temp != NULL) {
            if (temp->data == target)
                return index;
            temp = temp->next;
            index++;
        }
        return -1;
    }

    void insert_after_element(int val, int val2) {
        node* temp = head;
        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Element " << val << " not found in the list." << endl;
            return;
        }
        node* newnode = new node(val2);
        newnode->next = temp->next;
        newnode->prev = temp;
        if (temp->next != NULL)
            temp->next->prev = newnode;
        temp->next = newnode;
        if (newnode->next == NULL)
            tail = newnode;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;
        delete temp;
    }

    void pop_back() {
        if (tail == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        node* temp = tail;
        tail = tail->prev;
        if (tail != NULL)
            tail->next = NULL;
        else
            head = NULL;
        delete temp;
    }

    void pop_intermediate_position(int position) {
        node* temp = head;
        for (int i = 0; i < position; i++) {
            if (temp == NULL) {
                cout << "Invalid position." << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Invalid position." << endl;
            return;
        }
        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        else
            head = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        else
            tail = temp->prev;
        delete temp;
    }

    void pop_after_element(int val) {
        node* temp = head;
        while (temp != NULL && temp->data != val) {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            cout << "No element found after it." << endl;
            return;
        }
        node* todelete = temp->next;
        temp->next = todelete->next;
        if (todelete->next != NULL)
            todelete->next->prev = temp;
        else
            tail = temp;
        delete todelete;
    }

    void reverse() {
        node* curr = head;
        node* temp = NULL;
        while (curr != NULL) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        if (temp != NULL)
            head = temp->prev;
    }

    void concatenate(list& other) {
        if (head == NULL) {
            head = other.head;
            tail = other.tail;
        } else if (other.head != NULL) {
            tail->next = other.head;
            other.head->prev = tail;
            tail = other.tail;
        }
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    cout << "Push_front: " << endl;
    list l1;
    l1.push_front(5);
    l1.push_front(6);
    l1.push_front(7);
    l1.push_front(8);
    l1.display(); // 8 <-> 7 <-> 6 <-> 5 <-> NULL

    cout << "Push_back: " << endl;
    list l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.display(); // 1 <-> 2 <-> 3 <-> 4 <-> NULL

    cout << "Inserting at a certain position: " << endl;
    list l3;
    l3.push_back(5);
    l3.push_back(6);
    l3.push_back(7);
    l3.push_back(8);
    l3.insert_intermediate_position(10, 3);
    l3.display(); // 5 <-> 6 <-> 7 <-> 10 <-> 8 <-> NULL

    cout << "Iterative search: " << endl;
    list l4;
    l4.push_back(9);
    l4.push_back(10);
    l4.push_back(11);
    l4.push_back(12);
    l4.push_back(13);
    cout << "Index = " << l4.iterative_search(12) << endl; // Index = 3

    cout << "Insert after element: " << endl;
    list l5;
    l5.push_back(14);
    l5.push_back(15);
    l5.push_back(16);
    l5.push_back(17);
    l5.push_back(18);
    l5.insert_after_element(15, 19);
    l5.display(); // 14 <-> 15 <-> 19 <-> 16 <-> 17 <-> 18 <-> NULL

    cout << "Pop_front: " << endl;
    list l6;
    l6.push_front(19);
    l6.push_front(20);
    l6.push_front(21);
    l6.push_front(22);
    l6.push_front(23);
    l6.display(); // 23 <-> 22 <-> 21 <-> 20 <-> 19 <-> NULL
    l6.pop_front();
    l6.display(); // 22 <-> 21 <-> 20 <-> 19 <-> NULL

    cout << "Pop_back: " << endl;
    list l7;
    l7.push_front(24);
    l7.push_front(25);
    l7.push_front(26);
    l7.push_front(27);
    l7.push_front(28);
    l7.display(); // 28 <-> 27 <-> 26 <-> 25 <-> 24 <-> NULL
    l7.pop_back();
    l7.display(); // 28 <-> 27 <-> 26 <-> 25 <-> NULL

    cout << "Pop intermediate: " << endl;
    list l8;
    l8.push_back(29);
    l8.push_back(30);
    l8.push_back(31);
    l8.push_back(32);
    l8.push_back(33);
    l8.display(); // 29 <-> 30 <-> 31 <-> 32 <-> 33 <-> NULL
    l8.pop_intermediate_position(2);
    l8.display(); // 29 <-> 30 <-> 32 <-> 33 <-> NULL

    cout << "Pop after the element: " << endl;
    list l9;
    l9.push_back(34);
    l9.push_back(35);
    l9.push_back(36);
    l9.push_back(37);
    l9.push_back(38);
    l9.display(); // 34 <-> 35 <-> 36 <-> 37 <-> 38 <-> NULL
    l9.pop_after_element(36);
    l9.display(); // 34 <-> 35 <-> 36 <-> 38 <-> NULL

    cout << "Reverse a list: " << endl;
    list l10;
    l10.push_back(39);
    l10.push_back(40);
    l10.push_back(41);
    l10.push_back(42);
    l10.push_back(43);
    l10.display(); // 39 <-> 40 <-> 41 <-> 42 <-> 43 <-> NULL
    l10.reverse();
    l10.display(); // 43 <-> 42 <-> 41 <-> 40 <-> 39 <-> NULL

    cout << "Concatenation of lists: " << endl;
    list l11;
    l11.push_back(44);
    l11.push_back(45);
    l11.push_back(46);

    list l12;
    l12.push_back(50);
    l12.push_back(51);
    l12.push_back(52);
    l11.concatenate(l12);
    l11.display(); // 44 <-> 45 <-> 46 <-> 50 <-> 51 <-> 52 <-> NULL

    return 0;
}