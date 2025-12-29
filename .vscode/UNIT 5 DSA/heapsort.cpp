#include <iostream>
using namespace std;

// Heapify DOWN for Max Heap
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapSort(int arr[], int n) {

    // PHASE 1: Build Max Heap
    for (int i = (n/2) - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // PHASE 2: Extract elements one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);   // move max to end
        heapify(arr, i, 0);     // restore heap
    }
}

int main() {
    int arr[] = {4, 10, 3, 5, 1};
    int n = 5;

    heapSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
