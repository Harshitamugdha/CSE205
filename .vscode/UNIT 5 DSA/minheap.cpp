#include <iostream>
using namespace std;

class MinHeap {
    int *heap;
    int size;
    int capacity;

public:
    MinHeap(int cap) {
        capacity = cap;
        size = 0;
        heap = new int[capacity];
    }

    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Heapify DOWN
    void heapifyDown(int i) {
        int smallest = i;
        int l = left(i); //2*i +1
        int r = right(i); //2* i +2

        if (l < size && heap[l] < heap[smallest])
            smallest = l;

        if (r < size && heap[r] < heap[smallest])
            smallest = r;

        if (smallest != i) {
            swap(heap[i], heap[smallest]);
            heapifyDown(smallest);
        }
    }

    // Heapify UP
    void heapifyUp(int i) {
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    // Insert into heap
    void insert(int key) {
        if (size == capacity) {
            cout << "Heap Overflow\n";
            return;
        }

        heap[size] = key;
        size++;

        heapifyUp(size - 1);
    }

    // Delete root (minimum element)
    int extractMin() {
        if (size <= 0)
            return -1;

        if (size == 1) {
            size--;
            return heap[0];
        }

        int root = heap[0];
        heap[0] = heap[size - 1];
        size--;

        heapifyDown(0);
        return root;
    }

    // Build Min Heap from array
    void buildHeap(int arr[], int n) {
        if (n > capacity) {
            cout << "Array too large\n";
            return;
        }

        for (int i = 0; i < n; i++) {
            heap[i] = arr[i];
        }
        size = n;

        for (int i = (size / 2) - 1; i >= 0; i--) {
            heapifyDown(i);
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << heap[i] << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h(10);

    int arr[] = {40, 10, 30, 50, 20};
    int n = 5;

    cout << "Building Min Heap...\n";
    h.buildHeap(arr, n);
    h.display();

    cout << "Insert 5\n";
    h.insert(5);
    h.display();

    cout << "Extract Min: " << h.extractMin() << endl;
    h.display();

    return 0;
}
