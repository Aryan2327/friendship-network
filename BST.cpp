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
T* BST<T>::search(T key){
    return search(key, root);
}

template <typename T>
T* BST<T>::search(T key, Node*& node){
    if (node == nullptr){
        return nullptr;
    }
    if (key.getName() == (node->key).getName()){
        return &(node->key);
    }
    if (key.getName() < (node->key).getName()){
        return search(key, node->left);
    }
    if (key.getName() > (node->key).getName()){
        return search(key, node->right);
    }
}

template <typename T>
void BST<T>::inorderPredecessor(Node*& node, Node*& parent_node){
    parent_node = node;
    node = node->left;
    while (node->right != nullptr){
        parent_node = node;
        node = node->right;
    }
}

template <typename T>
bool BST<T>::remove(T key){
    Node* parent = nullptr;
    bool b = remove(key, root, parent);
    parent = nullptr;
    return b;
}

template <typename T>
bool BST<T>::remove(T key, Node*& node, Node*& parent_node){
    if (node == nullptr){
        return false;
    }
    if (key.getName() == (node->key).getName()){
        // delete node
        if (node->left != nullptr && node->right != nullptr){
            // Case: Both children are non null
            Node* inorder_pred = node;
            inorderPredecessor(inorder_pred, parent_node);
            T temp = node->key;
            node->key = inorder_pred->key;
            inorder_pred->key = temp;

            remove(key, inorder_pred, parent_node);

        }
        else{
            if (node->left != nullptr || node->right != nullptr){
                // Case: One child is non null
                if (parent_node->left == node){
                    parent_node->left = (node->left != nullptr)? node->left: node->right;
                } 
                else{
                    parent_node->right = (node->left != nullptr)? node->left: node->right;
                }
                delete(node);
                node = nullptr;

            }
            else{
                // Case: Both children are null
                if (parent_node->left == node) parent_node->left = nullptr;
                else{
                    parent_node->right = nullptr;
                }
                delete(node);
                node = nullptr;

            }
        }
        return true;
    }
    if (key.getName() < (node->key).getName()){
        parent_node = node;
        return remove(key, node->left, parent_node);
    }
    if (key.getName() > (node->key).getName()){
        parent_node = node;
        return remove(key, node->right, parent_node);
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