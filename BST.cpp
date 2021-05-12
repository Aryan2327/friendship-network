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
void BST<T>::insertHelper(T key, Node*& node){
    if (node == nullptr){
        node = new Node(key);
    }
    else if (key.getName() < (node->key).getName()){
        insertHelper(key, node->left);
    }
    else if (key.getName() > (node->key).getName()){
        insertHelper(key, node->right);
    }
}

template <typename T>
void BST<T>::print(){
    print(root);
}

template <typename T>
void BST<T>::print(Node*& node){
    if (node->left != nullptr){
        print(node->left);
    }
    if (node != nullptr){
        std::cout << (node->key).getName() << std::endl;
    }
    if (node->right != nullptr){
        print(node->right);
    }
}

template <typename T>
BST<T>::Node::~Node(){
    if (left != nullptr) delete left;
    if (right != nullptr) delete right;
}

template <typename T>
BST<T>::~BST(){
    if (root != nullptr) delete root;
}