// Implement a circular queue using an array and perform enqueue, and display operations.
#include <iostream>
using namespace std;

#define MAX 5

class CircularQueue {
    int arr[MAX];
    int front, rear;
public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        arr[rear] = x;
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    return 0;
}
