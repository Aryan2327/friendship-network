#ifndef BST
#define BST
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
    private:
        Node* root;
};
#include "BST.cpp"
#endif