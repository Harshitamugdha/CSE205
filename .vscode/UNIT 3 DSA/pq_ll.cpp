//NOT FOR LPU EXAM
#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* front = NULL;

// Enqueue based on priority
void enqueue(int data, int priority) {
    Node* temp = new Node();
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    // Case 1: empty queue OR higher priority than front
    if (front == NULL || priority > front->priority) {
        temp->next = front;
        front = temp;
    }
    else {
        Node* curr = front;
        while (curr->next != NULL && curr->next->priority >= priority) {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}

// Dequeue (remove highest priority)
void dequeue() {
    if (front == NULL) {
        cout << "Queue Underflow\n";
        return;
    }
    Node* temp = front;
    cout << temp->data << " dequeued\n";
    front = front->next;
    delete temp;
}

// Display queue
void display() {
    Node* curr = front;
    while (curr != NULL) {
        cout << curr->data << "(" << curr->priority << ") ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    enqueue(10, 2);
    enqueue(20, 1);
    enqueue(30, 3);
    enqueue(40, 2);

    display();
    dequeue();
    display();

    return 0;
}
