#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* head;     
    int num;        
    int capacity;   

public:
    Stack(int initialCapacity) {  
        head = nullptr;
        num = 0;
        capacity = initialCapacity;
    }

    void push(int x) {
        if (num == capacity) {
            increaseCapacity();
        }
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        num++;
        cout << "Pushed: " << x << " (Stack size: " << num << "/" << capacity << ")" << endl;
        printStack(); 
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot pop.\n";
            return -1;
        }
        Node* temp = head;
        int top = temp->data;
        head = head->next;
        delete temp;
        num--;
        cout << "Popped: " << top << " (Stack size: " << num << "/" << capacity << ")" << endl;
        printStack(); 
        return top;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty() {
        return num == 0;
    }

    void increaseCapacity() {
        capacity *= 2;
        cout << "Stack capacity increased to: " << capacity << endl;
    }

    void printStack() {
        if (isEmpty()) {
            cout << "Current Stack: [empty]\n";
            return;
        }
        Node* temp = head;
        cout << "Current Stack: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int initialSize, numElements, choice, value;

   
    while (true) {
        cout << "Enter initial stack size: ";
        cin >> initialSize;
        if (cin.fail() || initialSize <= 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a positive integer.\n";
        } else {
            break;
        }
    }

    Stack myStack(initialSize);

    
    while (true) {
        cout << "How many numbers do you want to push? ";
        cin >> numElements;
        if (cin.fail() || numElements < 0) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a non-negative integer.\n";
        } else {
            break;
        }
    }

    if (numElements > 0) {
        cout << "Enter " << numElements << " numbers to push into stack:\n";
        for (int i = 0; i < numElements; i++) {
            cin >> value;
            if (cin.fail()) { 
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input! Please enter a valid integer.\n";
                i--; 
            } else {
                myStack.push(value);
            }
        }
    }

   
    myStack.printStack();

    
    while (true) {
        cout << "\nChoose an operation:\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Print Stack\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) { 
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a valid number.\n";
            continue;
        }

        if (choice == 1) {
            cout << "Enter a number to push: ";
            cin >> value;
            if (cin.fail()) { 
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Invalid input! Please enter a valid integer.\n";
            } else {
                myStack.push(value);
            }
        } else if (choice == 2) {
            myStack.pop();
        } else if (choice == 3) {
            cout << "Top element (Peek): " << myStack.peek() << endl;
        } else if (choice == 4) {
            myStack.printStack();
        } else if (choice == 5) {
            cout << "Exiting program...\n";
            break;
        } else {
            cout << "Invalid choice! Please enter a number between 1-5.\n";
        }
    }

    return 0;
}
