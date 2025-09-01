#include<iostream>
using namespace std;

class node{
    int data;
    node* next;

public:
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
};
int main()
{
    list ll();
    return 0;
}