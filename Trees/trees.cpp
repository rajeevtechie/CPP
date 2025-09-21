#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node *left;
    node *right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;

node *buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx] == -1){
        return NULL;
    }

    node *currNode = new node(nodes[idx]); 
    currNode->left = buildTree(nodes);
    currNode->right = buildTree(nodes);

    return currNode;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

    node *root = buildTree(nodes); //1

    cout << "root = " << root->data << endl;

    return 0;
}