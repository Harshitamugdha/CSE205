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
void printPaths(Node* root, int path[], int pathLen) {
    if (root == NULL) return;

    path[pathLen] = root->data;
    pathLen++;

    if (root->left == NULL && root->right == NULL) {
        for (int i = 0; i < pathLen; i++)
            cout << path[i] << " ";
        cout << endl;
    } else {
        printPaths(root->left, path, pathLen);
        printPaths(root->right, path, pathLen);
    }
}
