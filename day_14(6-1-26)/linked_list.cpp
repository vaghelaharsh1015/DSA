#include <iostream>          
using namespace std;        

// Node class for linked list
class Node {
public:
    int data;                // Variable to store data
    Node* next;              // Pointer  store addres of next node

    Node(int val) {          // the Node class
        data = val;          // val give thise data to data
        next = NULL;         // Initialize next pointer as NULL
    }
};

// Function to insert a node at the end of the list
void insert(Node* &head, int val) {

    Node* newNode = new Node(val);   // Create new node using constructor

    if (head == NULL) {              // Check if list is empty
        head = newNode;              // Make new node as head
        return;                      // Exit function
    }

    Node* temp = head;               // Temporary pointer for traversal

    while (temp->next != NULL) {     // Loop until last node
        temp = temp->next;           // Move temp to next node
    }

    temp->next = newNode;            // Attach new node at the end
}

// Function to display linked list
void display(Node* head) {

    while (head != NULL) {            // Traverse till end of list
        cout << head->data << "->";   // Print node data
        head = head->next;            // Move to next node
    }
}

// Main function
int main() {

    Node* head = NULL;               // Initialize head as NULL

    insert(head, 10);                // Insert 10 at end
    insert(head, 20);                // Insert 20 at end
    insert(head, 30);                // Insert 30 at end
    insert(head, 40);                // Insert 40 at end
    insert(head, 50);                // Insert 50 at end

    display(head);                   // Display linked list

    return 0;                        // End of program
}
