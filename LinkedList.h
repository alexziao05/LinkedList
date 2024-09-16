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

    void prepend(T data) {
        prependNode(new Node<T>(data));
    }

    void prependNode(Node<T> *newNode) {
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    bool insertAfter(T currData, T newData) {
        Node<T> *currNode = search(currData);
        if (currNode) {
            Node<T> *newNode = new Node<T>(newData);
            insertAfterNode(currNode, newNode);
            return true;
        }
        return false;
    }

    void insertAfterNode(Node<T> *currNode, Node<T> *newNode) {
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else if (currNode == tail) {
            tail->next = newNode;
            tail = newNode;
        } else {
            newNode->next = currNode->next;
            currNode->next = newNode;
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

    Node<T> *search(T data) {
        Node<T> *current = head;
        while (current != nullptr) {
            if (current->data.isEqual(data)) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }
};



#endif //LINKEDLIST_H
