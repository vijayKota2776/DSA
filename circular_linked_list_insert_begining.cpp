// Create circular linked list data structure & perform insert at beginning and display operations.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
    Node* last;
public:
    CircularLinkedList() {
        last = nullptr;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (last == nullptr) {
            last = newNode;
            last->next = last;
        } else {
            newNode->next = last->next;
            last->next = newNode;
        }
    }

    void display() {
        if (last == nullptr) {
            cout << "List is Empty" << endl;
            return;
        }
        Node* temp = last->next;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != last->next);
        cout << endl;
    }
};

int main() {
    CircularLinkedList list;
    list.insertAtBeginning(10);
    list.insertAtBeginning(20);
    list.insertAtBeginning(30);
    list.display();
    return 0;
}
