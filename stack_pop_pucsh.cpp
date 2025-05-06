// Implement a stack using an array and perform push, pop operations in cpp.
#include <iostream>
using namespace std;
class Stack {
    private:
    int* arr;
    int top;
    int size;
    public:
    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
        }

        void push(int data) {
            if (top == size - 1) {
                cout << "Stack is full. Cannot push " << data << endl;
                return;
                }
                top++;
                arr[top] = data;
                }
        
        int pop() {
            if (top == -1) {
                cout << "Stack is empty. Cannot pop" << endl;
                return -1;
                }
                        
        int data = arr[top];
            top--;
            return data;
            }
                        
        int peek() {
            if (top == -1) {
                cout << "Stack is empty. Cannot peek" << endl;
                return -1;
                }
                return arr[top];
                }
                bool isEmpty() {
                    return (top == -1);
                    }
                bool isFull() {
                    return (top == size - 1);
                    }

                void printStack() {
                    for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";
                        }
                    cout << endl;
                    }
                };
                                               
    int main() {
            Stack s(5);
            s.push(10);
            s.push(20);
            s.push(30);
            s.push(40);
            s.push(50);
            s.printStack();
            s.pop();
            s.printStack();
            s.peek();
            s.isEmpty();
            s.isFull();
    return 0;
    }