#include <iostream>
using namespace std;

class Queue {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;  
    Node* rear;   
    int count;    

public:
   
    Queue() {
        front = rear = nullptr;
        count = 0;
    }

    
    void enqueue(int value) {
        Node* newNode = new Node{value, nullptr}; 
        if (!rear) { 
            front = rear = newNode;
        } else {
            rear->next = newNode; 
            rear = newNode;        
        }
        count++;
    }

    
    void dequeue() {
        if (!front) { 
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front; 
        front = front->next; 
        delete temp; 
        if (!front) { 
            rear = nullptr;
        }
        count--;
    }

    
    int top() {
        return front ? front->data : -1;
    }

   
    bool isEmpty() {
        return front == nullptr;
    }

    
    int size() {
        return count;
    }

   
    void printQueue() {
        if (!front) {
            cout << "Queue is empty!" << endl;
            return;
        }
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    
    void clearQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}
};


int main() {
    Queue q;

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout << "Queue: ";
    q.printQueue();

    cout << "Front element: " << q.top() << endl;
    
    q.dequeue();
    cout << "Queue after dequeue: ";
    q.printQueue();

    cout << "Queue size: " << q.size() << endl;
    
    return 0;
}
