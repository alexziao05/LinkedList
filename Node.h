//
// Created by Ziao Huang on 9/15/24.
//

#ifndef NODE_H
#define NODE_H



template <typename T> class Node {
    public:
    T data;
    Node *next;

    Node (T data) {
        this->data = data;
        next = nullptr;
    }
};



#endif //NODE_H
