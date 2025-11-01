//circular linkedlist
#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
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
            tail->next = head;
        } else {
            newnode->next = head;
            head = newnode;
            tail->next = head;
        }
    }

    void push_back(int val) {
        node* newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
            tail->next = head;
        } else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;
        }
    }

    void insert_intermediate_position(int val, int position) {
        node* newnode = new node(val);
        node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            if (temp->next == head) {
                cout << "Enter valid position." << endl;
                return;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        if (temp == tail)
            tail = newnode;
    }

    int iterative_search(int target) {
        if (head == NULL) return -1;
        node* temp = head;
        int index = 0;
        do {
            if (temp->data == target)
                return index;
            temp = temp->next;
            index++;
        } while (temp != head);
        return -1;
    }

    void insert_after_element(int val, int val2) {
        if (head == NULL) return;
        node* temp = head;
        do {
            if (temp->data == val) {
                node* newnode = new node(val2);
                newnode->next = temp->next;
                temp->next = newnode;
                if (temp == tail)
                    tail = newnode;
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Element " << val << " not found in the list." << endl;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        node* temp = head;
        if (head == tail) {
            head = tail = NULL;
        } else {
            head = head->next;
            tail->next = head;
        }
        delete temp;
    }

    void pop_back() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = head;
        delete tail;
        tail = temp;
    }

    void pop_intermediate_position(int position) {
        if (head == NULL) return;
        node* temp = head;
        for (int i = 0; i < position - 1; i++) {
            if (temp->next == head) {
                cout << "Invalid position." << endl;
                return;
            }
            temp = temp->next;
        }
        node* todelete = temp->next;
        temp->next = todelete->next;
        if (todelete == tail)
            tail = temp;
        delete todelete;
    }

    void pop_after_element(int val) {
        if (head == NULL) return;
        node* temp = head;
        do {
            if (temp->data == val) {
                if (temp->next == head) {
                    cout << "No element found after it." << endl;
                    return;
                }
                node* todelete = temp->next;
                temp->next = todelete->next;
                if (todelete == tail)
                    tail = temp;
                delete todelete;
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << "Element not found." << endl;
    }

    void reverse() {
        if (head == NULL || head == tail) return;
        node* prev = tail;
        node* curr = head;
        node* next = NULL;
        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while (curr != head);
        tail = head;
        head = prev;
    }

    void concatenate(list& other) {
        if (other.head == NULL) return;
        if (head == NULL) {
            head = other.head;
            tail = other.tail;
        } else {
            tail->next = other.head;
            other.tail->next = head;
            tail = other.tail;
        }
    }

    void display() {
        if (head == NULL) {
            cout << "NULL" << endl;
            return;
        }
        node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)" << endl;
    }
};

int main() {
    cout << "Push_front: " << endl;
    list l1;
    l1.push_front(5);
    l1.push_front(6);
    l1.push_front(7);
    l1.push_front(8);
    l1.display(); // 8 -> 7 -> 6 -> 5 -> (back to head)

    cout << "Push_back: " << endl;
    list l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.display(); // 1 -> 2 -> 3 -> 4 -> (back to head)

    cout << "Inserting at a certain position: " << endl;
    list l3;
    l3.push_back(5);
    l3.push_back(6);
    l3.push_back(7);
    l3.push_back(8);
    l3.insert_intermediate_position(10, 3);
    l3.display(); // 5 -> 6 -> 7 -> 10 -> 8 -> (back to head)

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
    l5.display(); // 14 -> 15 -> 19 -> 16 -> 17 -> 18 -> (back to head)

    cout << "Pop_front: " << endl;
    list l6;
    l6.push_front(19);
    l6.push_front(20);
    l6.push_front(21);
    l6.push_front(22);
    l6.push_front(23);
    l6.display(); // 23 -> 22 -> 21 -> 20 -> 19 -> (back to head)
    l6.pop_front();
    l6.display(); // 22 -> 21 -> 20 -> 19 -> (back to head)

    cout << "Pop_back: " << endl;
    list l7;
    l7.push_front(24);
    l7.push_front(25);
    l7.push_front(26);
    l7.push_front(27);
    l7.push_front(28);
    l7.display(); // 28 -> 27 -> 26 -> 25 -> 24 -> (back to head)
    l7.pop_back();
    l7.display(); // 28 -> 27 -> 26 -> 25 -> (back to head)

    cout << "Pop intermediate: " << endl;
    list l8;
    l8.push_back(29);
    l8.push_back(30);
    l8.push_back(31);
    l8.push_back(32);
    l8.push_back(33);
    l8.display(); // 29 -> 30 -> 31 -> 32 -> 33 -> (back to head)
    l8.pop_intermediate_position(2);
    l8.display(); // 29 -> 30 -> 32 -> 33 -> (back to head)

    cout << "Pop after the element: " << endl;
    list l9;
    l9.push_back(34);
    l9.push_back(35);
    l9.push_back(36);
    l9.push_back(37);
    l9.push_back(38);
    l9.display(); // 34 -> 35 -> 36 -> 37 -> 38 -> (back to head)
    l9.pop_after_element(36);
    l9.display(); // 34 -> 35 -> 36 -> 38 -> (back to head)

    cout << "Reverse a list: " << endl;
    list l10;
    l10.push_back(39);
    l10.push_back(40);
    l10.push_back(41);
    l10.push_back(42);
    l10.push_back(43);
    l10.display(); // 39 -> 40 -> 41 -> 42 -> 43 -> (back to head)
    l10.reverse();
    l10.display(); // 43 -> 42 -> 41 -> 40 -> 39 -> (back to head)

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
    l11.display(); // 44 -> 45 -> 46 -> 50 -> 51 -> 52 -> (back to head)

    return 0;
}