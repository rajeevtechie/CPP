#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Insert into BST
node* insert(node* root, int val) {
    if (root == NULL) {
        root = new node(val);
        return root;
    }

    if (val < root->data) { // left subtree
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

// Build BST from array
node* buildBST(int arr[], int n) {
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

// Inorder Traversal
void inorder(node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Find the minimum value node (used for deleting nodes with 2 children)
node* findMin(node* root) {
    while (root && root->left != NULL)
        root = root->left;
    return root;
}

// Delete a node from BST
node* deleteNode(node* root, int key) {
    if (root == NULL)
        return root;

    // Search for the node
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node found
        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // Case 2: One child
        else if (root->left == NULL) {
            node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3: Two children
        else {
            node* temp = findMin(root->right); // inorder successor
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

int main() {
    int arr[6] = {5, 1, 3, 4, 2, 7};

    node* root = buildBST(arr, 6);

    cout << "Inorder before deletion: ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter value to delete: ";
    cin >> key;

    root = deleteNode(root, key);

    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
