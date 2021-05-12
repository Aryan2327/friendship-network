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
        void print(); //inorder traversal
        T* search(T key);
        bool remove(T key);
        ~BST();
    private:
        Node* root;
        void insertHelper(T key, Node*& node);
        void print(Node*& node);
        T* search(T key, Node*& node);
        bool remove(T key, Node*& node, Node*& parent_node);
        void inorderPredecessor(Node*& node, Node*& parent_node);
};
#include "BST.cpp"
#endif