#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    if (rear == NULL) {
        front = rear = temp;
        return;
    }

    rear->next = temp;
    rear = temp;
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow\n";
        return;
    }

    Node* temp = front;
    cout << temp->data << " dequeued\n";
    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void traverse() {
    Node* curr = front;
    if (curr == NULL) {
        cout << "Queue empty\n";
        return;
    }
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    traverse();
    dequeue();
    traverse();
}
