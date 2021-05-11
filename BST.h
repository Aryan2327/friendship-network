#ifndef BST_H
#define BST_H
#include <string>
#include <stdlib.h>

class Node;

template <typename T>
class BST{
    public:
        class Node {
            public:
                friend class BST;
                Node(T key);
                ~Node();
            private:
                Node* left;
                Node* right;
                T key;
        };

        BST();
        void insert(T key);
    private:
        Node* root;
        void insertHelper(T key, Node*& root);
};
#include "BST.cpp"
#endif