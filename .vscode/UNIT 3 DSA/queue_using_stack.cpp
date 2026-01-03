#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:
    // Enqueue
    void enqueue(int x) {
        s1.push(x);
    }

    // Dequeue
    int dequeue() {
        if (s1.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        // Move elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        // Pop from s2
        int front = s2.top();
        s2.pop();

        // Move back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }

        return front;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl; // 10
    cout << q.dequeue() << endl; // 20
}
