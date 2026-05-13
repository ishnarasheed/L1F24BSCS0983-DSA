//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//// Task 4 & 5: Traversal [cite: 51, 69]
//void printList(Node* head) {
//    if (head == NULL) {
//        cout << "NULL" << endl;
//        return;
//    }
//    cout << head->data << " -> ";
//    printList(head->next);
//}
//
//// Task 5: Recursive Insertion at End 
//Node* insertAtEnd(Node* head, int val) {
//    if (head == NULL) {
//        Node* newNode = new Node;
//        newNode->data = val;
//        newNode->next = NULL;
//        return newNode;
//    }
//    head->next = insertAtEnd(head->next, val);
//    return head;
//}
//
//// Task 5: Recursive Search 
//int search(Node* head, int val, int pos) {
//    if (head == NULL) return -1;
//    if (head->data == val) return pos;
//    return search(head->next, val, pos + 1);
//}
//
//// Task 5: Recursive Deletion 
//Node* deleteByValue(Node* head, int val) {
//    if (head == NULL) return NULL;
//    if (head->data == val) {
//        Node* temp = head->next;
//        delete head;
//        return temp;
//    }
//    head->next = deleteByValue(head->next, val);
//    return head;
//}
//
//int main() {
//    Node* head = NULL;
//    head = insertAtEnd(head, 10);
//    head = insertAtEnd(head, 20);
//    head = insertAtEnd(head, 30);
//
//    cout << "List: ";
//    printList(head);
//
//    cout << "Position of 20: " << search(head, 20, 1) << endl;
//
//    head = deleteByValue(head, 20);
//    cout << "After Deleting 20: ";
//    printList(head);
//
//    return 0;
//}