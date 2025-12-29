//NOT FOR LPU EXAM
#include <iostream>
using namespace std;

#define SIZE 10

class PriorityQueue {
    int heap[SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    // Swap helper
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Heapify UP (for insertion)
    void heapifyUp(int index) {
        while (index != 0 && heap[(index - 1) / 2] < heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Heapify DOWN (for deletion)
    void heapifyDown(int index) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && heap[left] > heap[largest])
            largest = left;

        if (right < size && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

    // Enqueue (Insert)
    void enqueue(int value) {
        if (size == SIZE) {
            cout << "Priority Queue Overflow\n";
            return;
        }
        heap[size] = value;
        heapifyUp(size);
        size++;
    }

    // Dequeue (Remove highest priority)
    int dequeue() {
        if (size <= 0) {
            cout << "Priority Queue Underflow\n";
            return -1;
        }

        int root = heap[0];
        heap[0] = heap[size - 1];
        size--;
        heapifyDown(0);

        return root;
    }

    // Display
    void display() {
        for (int i = 0; i < size; i++)
            cout << heap[i] << " ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10);
    pq.enqueue(30);
    pq.enqueue(20);
    pq.enqueue(5);

    pq.display();

    cout << "Dequeued: " << pq.dequeue() << endl;
    pq.display();

    return 0;
}
