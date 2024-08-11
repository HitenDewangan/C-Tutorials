#include <iostream>

// Define a Node class to represent each element in the linked list
class Node {
public:
    int data; // Store the data value of the node
    Node* next; // Pointer to the next node in the list
};

// Define a Stack class to implement the stack data structure
class Stack {
private:
    Node* top; // Pointer to the top node of the stack

public:
    // Constructor to initialize the stack
    Stack() : top(nullptr) {}

    // Destructor to free the memory allocated for the stack
    ~Stack() {
        // Traverse the list and delete each node
        while (top) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    // Method to push an element onto the stack
    void push(int data) {
        // Create a new node with the given data
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = top; // Link the new node to the current top node
        top = newNode; // Update the top pointer to point to the new node
    }

    // Method to pop an element from the stack
    int pop() {
        // Check if the stack is empty
        if (top == nullptr) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return -1; // Return an error value
        }

        // Store the data value of the top node
        int data = top->data;

        // Update the top pointer to point to the next node
        Node* temp = top;
        top = top->next;

        // Delete the top node
        delete temp;

        // Return the popped data value
        return data;
    }

    // Method to append an element to the end of the stack
    void append(int data) {
        // Create a new node with the given data
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = nullptr; // Set the next pointer to null

        // Check if the stack is empty
        if (top == nullptr) {
            top = newNode; // Update the top pointer to point to the new node
        } else {
            // Traverse the list to find the last node
            Node* temp = top;
            while (temp->next) {
                temp = temp->next;
            }

            // Link the new node to the last node
            temp->next = newNode;
        }
    }

    // Method to peek at the top element of the stack
    int peek() {
        // Check if the stack is empty
        if (top == nullptr) {
            std::cerr << "Stack is empty. Cannot peek." << std::endl;
            return -1; // Return an error value
        }

        // Return the data value of the top node
        return top->data;
    }

    // Method to check if the stack is empty
    bool isEmpty() {
        return top == nullptr; // Return true if the stack is empty
    }

    // Method to print the elements of the stack
    void printStack() {
        // Traverse the list and print each data value
        Node* temp = top;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create a stack object
    Stack stack;

    // Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Print the elements of the stack
    stack.printStack(); // Output: 3 2 1

    // Pop an element from the stack
    std::cout << "Popped: " << stack.pop() << std::endl; // Output: Popped: 3

    // Print the elements of the stack
    stack.printStack(); // Output: 2 1

    // Append an element to the end of the stack
    stack.append(4);

    // Print the elements of the stack
    stack.printStack(); // Output: 2 1 4

    // push 5
    stack.push(5);

    // Print the elements of the stack
    stack.printStack(); // Output: 5 2 1 4

    stack.push(6);
    stack.push(7);

    // Print the elements of the stack
    stack.printStack(); // Output: 7 6 5 2 1 4
    
    // Peek at the top element of the stack
    std::cout << "Peek: " << stack.peek() << std::endl; // Output: Peek: 2

    return 0;
}