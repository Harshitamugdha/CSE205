#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = top;
    top = temp;
    cout << x << " pushed\n";
}

void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = top;
    cout << temp->data << " popped\n";
    top = top->next;
    delete temp;
}

void traverse() {
    Node* curr = top;
    if (curr == NULL) {
        cout << "Stack empty\n";
        return;
    }
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);
    traverse();
    pop();
    traverse();
}
