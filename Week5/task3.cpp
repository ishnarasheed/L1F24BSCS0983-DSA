//#include <iostream>
//using namespace std;
//class Node {
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
//class LinkedList
//{
//private:
//    Node* head;
//
//public:
//    LinkedList()
//    {
//        head = nullptr;
//    }
//    // part 1 Insert at specific position
//    void insertAtPosition(int value, int pos) 
//    {
//        Node* newNode = new Node(value);
//        if (pos == 1) {
//            newNode->next = head;
//            head = newNode;
//            return;
//        }
//
//        Node* temp = head;
//
//        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
//            temp = temp->next;
//        }
//
//        if (temp == nullptr) {
//            cout << "Invalid position\n";
//            return;
//        }
//
//        newNode->next = temp->next;
//        temp->next = newNode;
//    }
//
//    // part 2 Delete at specific position
//    void deleteAtPosition(int pos) {
//        if (head == nullptr) {
//            cout << "List is empty\n";
//            return;
//        }
//
//        // Delete first node
//        if (pos == 1) {
//            Node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        Node* temp = head;
//
//        for (int i = 1; i < pos - 1 && temp->next != nullptr; i++)
//        {
//            temp = temp->next;
//        }
//
//        if (temp->next == nullptr) 
//        {
//            cout << "Invalid position\n";
//            return;
//        }
//
//        Node* delNode = temp->next;
//        temp->next = delNode->next;
//        delete delNode;
//    }
//
//    // part 3 Search element
//    void search(int value)
//    {
//        Node* temp = head;
//        int pos = 1;
//
//        while (temp != nullptr) 
//        {
//            if (temp->data == value)
//            {
//                cout << "Found at position: " << pos << endl;
//                return;
//            }
//            temp = temp->next;
//            pos++;
//        }
//
//        cout << "Element not found\n";
//    }
//
//    // part 4 Count nodes
//    void countNodes()
//    {
//        int count = 0;
//        Node* temp = head;
//
//        while (temp != nullptr) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total nodes: " << count << endl;
//    }
//    void display() {
//        Node* temp = head;
//
//        if (temp == nullptr) {
//            cout << "List is empty\n";
//            return;
//        }
//
//        while (temp != nullptr) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//
//        cout << "NULL\n";
//    }
//};
//int main() {
//    LinkedList list;
//    int choice, value, pos;
//
//    do {
//        cout << "\n--- MENU ---\n";
//        cout << "1. Insert at Position\n";
//        cout << "2. Delete at Position\n";
//        cout << "3. Search Element\n";
//        cout << "4. Count Nodes\n";
//        cout << "5. Display List\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value and position: ";
//            cin >> value >> pos;
//            list.insertAtPosition(value, pos);
//            break;
//
//        case 2:
//            cout << "Enter position: ";
//            cin >> pos;
//            list.deleteAtPosition(pos);
//            break;
//
//        case 3:
//            cout << "Enter value to search: ";
//            cin >> value;
//            list.search(value);
//            break;
//
//        case 4:
//            list.countNodes();
//            break;
//
//        case 5:
//            list.display();
//            break;
//
//        case 0:
//            cout << "Exiting...\n";
//            break;
//
//        default:
//            cout << "Invalid choice\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}