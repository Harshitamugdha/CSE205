#include <iostream>
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

void kthLargest(Node* root, int &k, int &ans) {
    if (root == NULL || k <= 0) return;

    // 1) Go right (larger values)
    kthLargest(root->right, k, ans);

    // 2) Process current node
    k--;
    if (k == 0) {
        ans = root->data;
        return;
    }

    // 3) Go left
    kthLargest(root->left, k, ans);
}
