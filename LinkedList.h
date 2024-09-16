//
// Created by Ziao Huang on 9/15/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
using namespace std;

template <typename T> class LinkedList {
    private:

    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;

    public:
    void append(T data) {
        appendNode(new Node<T>(data));
    }

    void appendNode(Node<T> *newNode) {
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList() {

        Node<T> *current = head;

        while (current != nullptr) {
            current->data.print();
            cout << "->";
            current = current->next;
        }

        cout << "NULL" << endl;
    }
};



#endif //LINKEDLIST_H
