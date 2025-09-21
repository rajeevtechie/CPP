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

bool search(node *root, int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(root->data > key){
        return search(root->left,key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    int arr[6] = {5,1,3,4,2,7};
    int arr2[9] = {8,5,3,1,4,6,10,11,14};

    node *root = buildBST(arr2,9);
    
    cout << search(root,8); //1 or true
    return 0; 
}