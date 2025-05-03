// Implement a linear queue using an array and perform dequeue, and display operations.
#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear >= MAX - 1) return;
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
