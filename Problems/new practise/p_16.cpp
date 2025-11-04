#include<iostream>
using namespace std;

class node{
public: 
    int data;
    node *left;
    node *right;

    node(int val){
        left = right = NULL;
        data = val;
    }
};

node *insert(node *root,int val){
    if(root == NULL){
        root = new node(val);
        return root;
    }
    if(root->data<val){
        root->right = insert(root->right,val);
    }
    else{
        root->left = insert(root->left,val);
    }

    return root;
}

node *BuildBST(int arr[], int size){
    node *root = NULL;
    for(int i=0; i<size; i++){
        root = insert(root,arr[i]);
    }
    return root;
}

void preorder(node *root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node*root){
    if(root == NULL){
        return;
    }
    
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node *root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main(){
    int arr[6] = {5,2,6,1,9};

    node *root = BuildBST(arr,5);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    return 0;
}

