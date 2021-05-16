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
        T* insert(T key);
        void print(); //inorder traversal
        void inorder_reinit(); //performs a reinitialization on each node
        T* search(T key);
        bool remove(T key);
        ~BST();
    private:
        Node* root;
        T* insert(T key, Node*& node);
        void print(Node*& node);
        void inorder_reinit(Node*& node);
        T* search(T key, Node*& node);
        bool remove(T key, Node*& node, Node*& parent_node);
        void inorderPredecessor(Node*& node, Node*& parent_node);
};
#include "BST.cpp"
#endif