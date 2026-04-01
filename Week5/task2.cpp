//#include <iostream>
//using namespace std;
//class Node
//{
//public:
//    int data;
//    Node* next;
//
//    Node(int value)
//    {
//        data = value;
//        next = nullptr;
//    }
//};
//class ADTLinkedList
//{
//private:
//    Node* head;
//
//public:
//    
//    ADTLinkedList()
//    {
//        head = nullptr;
//    }
//
//    // PART 1 INSER5T AT STRAT
//    void insertAtBeginning(int value) {
//        Node* newNode = new Node(value);
//
//        newNode->next = head;
//        head = newNode;
//    }
//
//    // PART 2 INSERT AT END
//    void insertAtEnd(int value) {
//        Node* newNode = new Node(value);
//
//        if (head == nullptr)
//        {
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        while (temp->next != nullptr) 
//        {
//            temp = temp->next;
//        }
//
//        temp->next = newNode;
//    }
//    // PART  3 DELETE
//    void deleteByValue(int value)
//    {
//        if (head == nullptr) 
//        {
//            cout << "List is empty.\n";
//            return;
//        }
//
//     
//        if (head->data == value)
//        {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        Node* temp = head;
//        Node* prev = nullptr;
//
//        while (temp != nullptr && temp->data != value)
//        {
//            prev = temp;
//            temp = temp->next;
//        }
//   
//        if (temp == nullptr)
//        {
//            cout << "Value not found.\n";
//            return;
//        }
//
//      
//        prev->next = temp->next;
//        delete temp;
//    }
//
//  
//    void display()
//    {
//        if (head == nullptr) {
//            cout << "List is empty.\n";
//            return;
//        }
//
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//
//        cout << "NULL\n";
//    }
//};
//int main() 
//{
//    ADTLinkedList list;
//
//    list.insertAtBeginning(10);
//    list.insertAtBeginning(5);
//
//    list.insertAtEnd(20);
//    list.insertAtEnd(30);
//
//    list.display();
//
//    list.deleteByValue(20);
//    list.display();
//
//    return 0;
//}