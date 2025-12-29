#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int val) {
    Node* temp = new Node();
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
//BST
Node* search(Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}
Node* insert(Node* root, int key) {
    if (root == NULL)
        return newNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

Node* deleteNode(Node* root, int key) {
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    else {
        // Case 1 & 2
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void kthSmallest(Node* root, int &k, int &ans) {
    if (root == NULL) return;

    kthSmallest(root->left, k, ans);
    k--;
    if (k == 0) {
        ans = root->data;
        return;
    }
    kthSmallest(root->right, k, ans);
}

int main() {
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    inorder(root);     // 4 2 5 1 3
    preorder(root);    // 1 2 4 5 3
    postorder(root);   // 4 5 2 3 1
}
