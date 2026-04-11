#include <iostream>
using namespace std;

// Define the structure of a single node
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() { top = NULL; }

    // Add an element to the top of the stack
    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = top; // Point new node to the current top
        top = newNode;       // Update top to be the new node
        cout << val << " pushed into stack.\n";
    }

    // Remove the top element
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow! No elements to pop.\n";
            return;
        }
        Node* temp = top;
        cout << "Popped element: " << top->data << endl;
        top = top->next;     // Move top to the next node
        delete temp;         // Free memory
    }

    // Show the top element without removing it
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }

    // Display all elements in the stack
    void display() {
        if (top == NULL) {
            cout << "Stack is empty.\n";
            return;
        }
        Node* temp = top;
        cout << "Stack (Top to Bottom): ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Stack s;
    int choice, val;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
