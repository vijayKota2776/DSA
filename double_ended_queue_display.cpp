//  Implement a double ended queue using an array and perform enqueue at front and display operations.
#include <iostream>
using namespace std;

#define MAX 5

class Deque {
    int arr[MAX];
    int front, rear;
public:
    Deque() {
        front = -1;
        rear = -1;
    }

    void enqueueFront(int x) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Deque Overflow" << endl;
            return;
        }
        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = MAX - 1;
        } else {
            front--;
        }
        arr[front] = x;
    }

    void display() {
        if (front == -1) {
            cout << "Deque is Empty" << endl;
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
    Deque dq;
    dq.enqueueFront(10);
    dq.enqueueFront(20);
    dq.enqueueFront(30);
    dq.display();
    return 0;
}
