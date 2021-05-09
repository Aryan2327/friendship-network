#include <iostream>

template <typename T>
BST<T>::Node::Node(T key){
    left = nullptr;
    right = nullptr;
    this->key = key;
}

template <typename T>
BST<T>::BST(){
    root = nullptr;
}

template <typename T>
void BST<T>::insert(T key){
    insertHelper(key, root);
}

template <typename T>
void BST<T>::insertHelper(T key, Node* node){
    if (node == nullptr){
        node = new Node(key);
    }
    else if (key < node->key){
        insertHelper(key, node->left);
    }
    else if (key > root->key){
        insertHelper(key, node->right);
    }
}