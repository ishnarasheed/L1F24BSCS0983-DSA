//#include <iostream>
//
//using namespace std;
//
//// Structure for a BST Node
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//
//    Node(int val) {
//        data = val;
//        left = nullptr;
//        right = nullptr;
//    }
//};
//
//// 1. Insert a Sequence of Numbers (ignoring duplicate entries)
//Node* insertNode(Node* root, int val) {
//    if (root == nullptr) {
//        return new Node(val);
//    }
//    if (val < root->data) {
//        root->left = insertNode(root->left, val);
//    }
//    else if (val > root->data) {
//        root->right = insertNode(root->right, val);
//    }
//    return root;
//}
//
//// 2. Traversals
//void inorder(Node* root) {
//    if (root == nullptr) return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//void preorder(Node* root) {
//    if (root == nullptr) return;
//    cout << root->data << " ";
//    preorder(root->left);
//    preorder(root->right);
//}
//
//void postorder(Node* root) {
//    if (root == nullptr) return;
//    postorder(root->left);
//    postorder(root->right);
//    cout << root->data << " ";
//}
//
//// 3. Search for a Given Key
//bool searchNode(Node* root, int key) {
//    if (root == nullptr) return false;
//    if (root->data == key) return true;
//    if (key < root->data) return searchNode(root->left, key);
//    return searchNode(root->right, key);
//}
//
//// Memory Cleanup Helper
//void freeTree(Node* root) {
//    if (root == nullptr) return;
//    freeTree(root->left);
//    freeTree(root->right);
//    delete root;
//}
//
//int main()
//{
//    Node* root = nullptr;
//    int n, val, searchKey;
//
//    cout << "--- TASK 1: BST INSERTION, TRAVERSAL & SEARCH ---\n";
//    cout << "How many numbers would you like to insert? ";
//    cin >> n;
//
//    cout << "Enter " << n << " integers (e.g., 50 30 70 20 40 60 80): ";
//    for (int i = 0; i < n; i++) {
//        cin >> val;
//        root = insertNode(root, val);
//    }
//
//    cout << "\n--- Displaying Traversals ---" << endl;
//    cout << "Inorder Traversal (Sorted order):     ";
//    inorder(root);
//    cout << "\nPreorder Traversal (Tree structure):   ";
//    preorder(root);
//    cout << "\nPostorder Traversal (Bottom-up evaluation): ";
//    postorder(root);
//    cout << "\n\n";
//
//    cout << "--- Search Operation ---" << endl;
//    cout << "Enter a value (key) to search for: ";
//    cin >> searchKey;
//
//    if (searchNode(root, searchKey)) {
//        cout << "Key found in BST\n";
//    }
//    else {
//        cout << "Key not found in BST\n";
//    }
//
//    freeTree(root);
//    return 0;
//}