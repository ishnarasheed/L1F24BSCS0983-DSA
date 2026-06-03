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
//Node* insertNode(Node* root, int val) {
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
//// Recursive identical checker framework
//bool isIdentical(Node* root1, Node* root2) {
//    // Both pointers empty -> True
//    if (root1 == nullptr && root2 == nullptr)
//        return true;
//
//    // One pointer empty while structural pairing continues -> False
//    if (root1 == nullptr || root2 == nullptr) 
//        return false;
//
//    // Evaluate node evaluations and recursively validate remaining downstream branches
//    return (root1->data == root2->data) &&
//        isIdentical(root1->left, root2->left) &&
//        isIdentical(root1->right, root2->right);
//}
//
//void freeTree(Node* root) {
//    if (root == nullptr) return;
//    freeTree(root->left);
//    freeTree(root->right);
//    delete root;
//}
//
//int main() {
//    Node* tree1 = nullptr;
//    Node* tree2 = nullptr;
//    int size1, size2, item;
//
//    cout << "--- TASK 3: IDENTICAL BST CHECKER ---\n";
//
//    // Setup Tree 1
//    cout << "Enter the number of elements for Tree 1: ";
//    cin >> size1;
//    cout << "Enter sequence elements for Tree 1: ";
//    for (int i = 0; i < size1; i++) {
//        cin >> item;
//        tree1 = insertNode(tree1, item);
//    }
//
//    // Setup Tree 2
//    cout << "Enter the number of elements for Tree 2: ";
//    cin >> size2;
//    cout << "Enter sequence elements for Tree 2: ";
//    for (int i = 0; i < size2; i++) {
//        cin >> item;
//        tree2 = insertNode(tree2, item);
//    }
//
//    // Print out elements via Inorder Traversal
//    cout << "\nTree 1 Inorder Output: ";
//    inorder(tree1);
//    cout << "\nTree 2 Inorder Output: ";
//    inorder(tree2);
//    cout << "\n\n";
//
//    // Run structural check
//    if (isIdentical(tree1, tree2)) {
//        cout << "Message Result: The two BSTs are identical.\n";
//    }
//    else {
//        cout << "Message Result: The two BSTs are not identical.\n";
//    }
//
//    freeTree(tree1);
//    freeTree(tree2);
//    return 0;
//}