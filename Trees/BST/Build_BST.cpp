#include<iostream>
#include<vector>
using namespace std;
 
class node{
public:
    int data;
    node* left;
    node *right;

    node(int data){
        this->data = data;
        left = right = NULL; 
    }
};

node *insert(node* root,int val){
    if(root == NULL){
        root = new node(val);
        return root;
    }

    if(val < root->data){ //left subtree
       root->left = insert(root->left, val);
    }
    else {
        root->right = insert(root->right,val);
    }

    return root;
}

node *buildBST(int arr[], int n){
    node *root = NULL;
    for(int i=0; i<n; i++){
     root = insert(root,arr[i]);
    }

    return root;
}

void inorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    int arr[6] = {5,1,3,4,2,7};

    node *root = buildBST(arr,6);
    inorder(root);
    cout << endl;
    return 0; 
}