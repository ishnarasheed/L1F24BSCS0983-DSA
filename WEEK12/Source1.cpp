//#include <iostream>
//
//using namespace std;
//
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//    Node(int val) : data(val), left(nullptr), right(nullptr) {}
//};
//
//Node* insertNode(Node* root, int val) 
//{
//    if (root == nullptr)
//        return new Node(val);
//    if (val < root->data) 
//        root->left = insertNode(root->left, val);
//    else if (val > root->data) 
//        root->right = insertNode(root->right, val);
//    return root;
//}
//
//void inorder(Node* root) {
//    if (root == nullptr) return;
//    inorder(root->left);
//    cout << root->data << " ";
//    inorder(root->right);
//}
//
//// Helper function to find the smallest node in a given subtree (Inorder Successor)
//Node* findMin(Node* root)
//{
//    while (root && root->left != nullptr) {
//        root = root->left;
//    }
//    return root;
//}
//
//// Recursive function to remove a node based on structural case requirements
//Node* deleteNode(Node* root, int key) {
//    if (root == nullptr)
//        return root;
//
//    // 1. Navigate to target node
//    if (key < root->data) {
//        root->left = deleteNode(root->left, key);
//    }
//    else if (key > root->data) {
//        root->right = deleteNode(root->right, key);
//    }
//    else {
//        // Node found! Handle the 3 structural cases:
//
//        // Case 1 & Case 2: Leaf Node or Node with Only One Child
//        if (root->left == nullptr) {
//            Node* temp = root->right;
//            delete root;
//            return temp;
//        }
//        else if (root->right == nullptr) {
//            Node* temp = root->left;
//            delete root;
//            return temp;
//        }
//
//        // Case 3: Node with Two Children
//        // Fetch the inorder successor (smallest element in the right subtree)
//        Node* temp = findMin(root->right);
//        root->data = temp->data; // Substitute value with successor value
//        root->right = deleteNode(root->right, temp->data); // Delete the old duplicate successor
//    }
//    return root;
//}
//
//void freeTree(Node* root) {
//    if (root == nullptr)
//        return;
//    freeTree(root->left);
//    freeTree(root->right);
//    delete root;
//}
//
//int main() {
//    Node* root = nullptr;
//
//    // Hardcoded insertion sequence ... requirements
//    int numbers[] = { 50, 30, 70, 20, 40, 60, 80 };
//    for (int num : numbers) {
//        root = insertNode(root, num);
//    }
//
//    cout << "--- TASK 2: DELETION FUNCTIONALITY ---\n";
//    cout << "Initial Inorder Traversal: ";
//    inorder(root);
//    cout << "\n\n";
//
//    int target;
//    cout << "Enter a key value you want to delete from the tree: ";
//    cin >> target;
//
//    root = deleteNode(root, target);
//
//    cout << "Inorder Traversal after deletion of " << target << ": ";
//    inorder(root);
//    cout << "\n";
//
//    freeTree(root);
//    return 0;
//}