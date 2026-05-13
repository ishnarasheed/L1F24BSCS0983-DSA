//#include <iostream>
//using namespace std;
//
//struct DNode {
//    int data;
//    DNode* next;
//    DNode* prev;
//};
//
//// Helper to get tail recursively
//DNode* getTail(DNode* head) {
//    if (head == NULL || head->next == NULL) return head;
//    return getTail(head->next);
//}
//
//bool checkPalindrome(DNode* left, DNode* right) {
//    if (left == NULL || right == NULL || left == right || right->next == left) {
//        return true;
//    }
//    if (left->data != right->data) {
//        return false;
//    }
//    return checkPalindrome(left->next, right->prev);
//}