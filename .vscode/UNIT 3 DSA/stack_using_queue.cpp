#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    // Push
    void push(int x) {
        // Step 1: Push to q2
        q2.push(x);

        // Step 2: Move all q1 elements to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: Swap q1 and q2
        swap(q1, q2);
    }

    // Pop
    int pop() {
        if (q1.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        int top = q1.front();
        q1.pop();
        return top;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << endl; // 30
    cout << s.pop() << endl; // 20
}
