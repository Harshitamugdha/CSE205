#include <iostream>
using namespace std;

#define SIZE 5

class Deque {
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = rear = -1;
    }

    void insertFront(int x) {
        if (front == 0) {
            cout << "Overflow\n";
            return;
        }
        if (front == -1)
            front = rear = 0;
        else
            front--;

        arr[front] = x;
    }

    void insertRear(int x) {
        if (rear == SIZE - 1) {
            cout << "Overflow\n";
            return;
        }
        if (rear == -1)
            front = rear = 0;
        else
            rear++;

        arr[rear] = x;
    }

    void deleteFront() {
        if (front == -1) {
            cout << "Underflow\n";
            return;
        }
        front++;
        if (front > rear)
            front = rear = -1;
    }

    void deleteRear() {
        if (rear == -1) {
            cout << "Underflow\n";
            return;
        }
        rear--;
        if (front > rear)
            front = rear = -1;
    }

    void display() {
        if (front == -1) {
            cout << "Deque empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Deque d;
    d.insertRear(10);
    d.insertRear(20);
    d.insertFront(5);
    d.display();
    d.deleteFront();
    d.display();
}
