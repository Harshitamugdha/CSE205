#include <iostream>
using namespace std;

#define SIZE 5

struct Item {
    int data;
    int priority;
};

class PriorityQueue {
    Item pq[SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    void enqueue(int d, int p) {
        if (size == SIZE) {
            cout << "Queue Overflow\n";
            return;
        }
        pq[size].data = d;
        pq[size].priority = p;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue Underflow\n";
            return;
        }

        int highest = 0;
        for (int i = 1; i < size; i++) {
            if (pq[i].priority > pq[highest].priority)
                highest = i;
        }

        cout << pq[highest].data << " dequeued\n";

        for (int i = highest; i < size - 1; i++)
            pq[i] = pq[i + 1];

        size--;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << pq[i].data << "(" << pq[i].priority << ") ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);
    pq.display();
    pq.dequeue();
    pq.display();
}
