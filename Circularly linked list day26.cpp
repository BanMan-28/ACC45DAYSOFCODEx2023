#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    // Insert a node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            newNode->next = newNode; // The list is empty; make it self-referential
        } else {
            newNode->next = head;
            Node* current = head;
            while (current->next != head) {
                current = current->next;
            }
            current->next = newNode;
        }
        head = newNode;
    }

    // Insert a node at the end of the list
    void insertAtEnd(int value) {
        if (head == nullptr) {
            insertAtBeginning(value); // If the list is empty, just insert at the beginning
            return;
        }
        Node* newNode = new Node(value);
        Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }

    // Display the circular linked list
    void display() {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        Node* current = head;
        do {
            std::cout << current->data << " -> ";
            current = current->next;
        } while (current != head);

        std::cout << " (Head)" << std::endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtBeginning(1);
    cll.insertAtBeginning(2);
    cll.insertAtEnd(3);

    std::cout << "Circular Linked List: ";
    cll.display();

    return 0;
}
