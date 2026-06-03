#include <iostream>
#include <string>

using namespace std;

// BST Structural Setup for Book nodes
struct BookNode {
    int isbn;
    string title;
    BookNode* left;
    BookNode* right;

    BookNode(int id, string t) {
        isbn = id;
        title = t;
        left = nullptr;
        right = nullptr;
    }
};

// Singly Linked List Data Layout Map
struct ListNode {
    int isbn;
    string title;
    ListNode* next;

    ListNode(int id, string t) {
        isbn = id;
        title = t;
        next = nullptr;
    }
};

// Insert unique values into the library BST based on ISBN values
BookNode* insertBook(BookNode* root, int isbn, string title) {
    if (root == nullptr) return new BookNode(isbn, title);
    if (isbn < root->isbn) root->left = insertBook(root->left, isbn, title);
    else if (isbn > root->isbn) root->right = insertBook(root->right, isbn, title);
    return root;
}

// Recursive transformation using inorder trajectory sequence mapping
void bstToLinkedList(BookNode* root, ListNode*& head, ListNode*& tail) {
    if (root == nullptr) return;

    // 1. Process left sub-hierarchy first
    bstToLinkedList(root->left, head, tail);

    // 2. Map structural current target node to a newly instances List alternative
    ListNode* newNode = new ListNode(root->isbn, root->title);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }

    // 3. Process remaining right path variables
    bstToLinkedList(root->right, head, tail);
}

// Display structural content mapping sequence
void printLinkedList(ListNode* head) {
    if (head == nullptr) {
        cout << "The catalog database structure map contains no inventory.\n";
        return;
    }
    cout << "\n----------------------------------------\n";
    cout << "SORTED LIBRARY CATALOG (LINKED LIST)\n";
    cout << "----------------------------------------\n";
    while (head != nullptr) {
        cout << "ISBN: " << head->isbn << "\t | Title: " << head->title << "\n";
        head = head->next;
    }
    cout << "----------------------------------------\n";
}

void freeBookTree(BookNode* root) {
    if (root == nullptr) return;
    freeBookTree(root->left);
    freeBookTree(root->right);
    delete root;
}

void freeLinkedList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    BookNode* libraryRoot = nullptr;
    ListNode* listHead = nullptr;
    ListNode* listTail = nullptr;

    int count, isbn;
    string title;

    cout << "--- TASK 4: LIBRARY CATALOG TRANSFORMATION SYSTEM ---\n";
    cout << "How many books would you like to enter into inventory? ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "\nEnter Details for Book #" << i + 1 << ":\n";
        cout << "ISBN Key (Integer): ";
        cin >> isbn;
        cin.ignore(); // Flush the trailing input characters from standard buffer allocation
        cout << "Book Title string: ";
        getline(cin, title);

        libraryRoot = insertBook(libraryRoot, isbn, title);
    }

    // Transform collection mapping setup recursively
    bstToLinkedList(libraryRoot, listHead, listTail);

    // Print resulting output records catalog collection map details
    printLinkedList(listHead);

    // Free resources allocated
    freeBookTree(libraryRoot);
    freeLinkedList(listHead);
    return 0;
}