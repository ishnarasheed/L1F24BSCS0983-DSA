//#include <iostream>
//using namespace std;
//
//
//struct node
//{
//    int roll;
//    string name;
//    float marks;
//    node* next = nullptr;
//};
//
//class StudentList
//{
//    node* head;
//
//public:
//    StudentList() 
//    {
//        head = nullptr;
//    }
//
//  
//    void insertAtHead(int r, string n, float m) {
//        node* temp = new node();
//        temp->roll = r;
//        temp->name = n;
//        temp->marks = m;
//
//        temp->next = head;
//        head = temp;
//    }
//
//  
//    void insertAtTail(int r, string n, float m) 
//    {
//        node* temp = new node();
//        temp->roll = r;
//        temp->name = n;
//        temp->marks = m;
//
//        if (head == nullptr) 
//        {
//            head = temp;
//            return;
//        }
//
//        node* t = head;
//        while (t->next != nullptr)
//        {
//            t = t->next;
//        }
//        t->next = temp;
//    }
//
//    void insertAfterRoll(int key, int r, string n, float m)
//    {
//        node* t = head;
//
//        while (t != nullptr && t->roll != key)
//        {
//            t = t->next;
//        }
//
//        if (t == nullptr)
//        {
//            cout << "Roll not found!\n";
//            return;
//        }
//
//        node* temp = new node();
//        temp->roll = r;
//        temp->name = n;
//        temp->marks = m;
//
//        temp->next = t->next;
//        t->next = temp;
//    }
//
//    void deleteByRoll(int key) 
//    {
//        if (head == nullptr) 
//        {
//            cout << "List is empty!\n";
//            return;
//        }
//
//       
//        if (head->roll == key) 
//        {
//            node* temp = head;
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        node* temp = head;
//        node* prev = nullptr;
//
//        while (temp != nullptr && temp->roll != key)
//        {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (temp == nullptr)
//        {
//            cout << "Student not found!\n";
//            return;
//        }
//
//        prev->next = temp->next;
//        delete temp;
//    }
//
//    void display() {
//        if (head == nullptr)
//        {
//            cout << "No records!\n";
//            return;
//        }
//
//        node* t = head;
//        cout << "\nRoll\tName\tMarks\n";
//        while (t != nullptr) {
//            cout << t->roll << "\t" << t->name << "\t" << t->marks << endl;
//            t = t->next;
//        }
//    }
//
//
//    void search(int key)
//    {
//        node* t = head;
//
//        while (t != nullptr)
//        {
//            if (t->roll == key)
//            {
//                cout << "Found: " << t->roll << " " << t->name << " " << t->marks << endl;
//                return;
//            }
//            t = t->next;
//        }
//
//        cout << "Student not found!\n";
//    }
//
//    // -------- Update --------
//    void update(int key) 
//    {
//        node* t = head;
//
//        while (t != nullptr) {
//            if (t->roll == key) {
//                cout << "Enter new name: ";
//                cin >> t->name;
//                cout << "Enter new marks: ";
//                cin >> t->marks;
//                return;
//            }
//            t = t->next;
//        }
//
//        cout << "Student not found!\n";
//    }
//
//    //            Statistics
//    void stats()
//    {
//        if (head == nullptr) 
//        {
//            cout << "No data!\n";
//            return;
//        }
//
//        node* t = head;
//        float sum = 0;
//        float max = t->marks;
//        float min = t->marks;
//        int count = 0;
//
//        while (t != nullptr)
//         {
//            if (t->marks > max)
//                max = t->marks;
//            if (t->marks < min)
//                min = t->marks;
//
//            sum += t->marks;
//            count++;
//            t = t->next;
//        }
//
//        cout << "Highest: " << max << endl;
//        cout << "Lowest: " << min << endl;
//        cout << "Average: " << (sum / count) << endl;
//    }
//};
//
//int main()
//{
//    StudentList s;
//    int choice;
//
//    do {
//        cout << "\n--- Student Record System ---\n";
//        cout << "1. Insert at Head\n";
//        cout << "2. Insert at Tail\n";
//        cout << "3. Insert After Roll\n";
//        cout << "4. Delete by Roll\n";
//        cout << "5. Display\n";
//        cout << "6. Search\n";
//        cout << "7. Update\n";
//        cout << "8. Statistics\n";
//        cout << "9. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        int r, key;
//        string n;
//        float m;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter roll name marks: ";
//            cin >> r >> n >> m;
//            s.insertAtHead(r, n, m);
//            break;
//
//        case 2:
//            cout << "Enter roll name marks: ";
//            cin >> r >> n >> m;
//            s.insertAtTail(r, n, m);
//            break;
//
//        case 3:
//            cout << "Enter roll after which insert: ";
//            cin >> key;
//            cout << "Enter roll name marks: ";
//            cin >> r >> n >> m;
//            s.insertAfterRoll(key, r, n, m);
//            break;
//
//        case 4:
//            cout << "Enter roll to delete: ";
//            cin >> key;
//            s.deleteByRoll(key);
//            break;
//
//        case 5:
//            s.display();
//            break;
//
//        case 6:
//            cout << "Enter roll to search: ";
//            cin >> key;
//            s.search(key);
//            break;
//
//        case 7:
//            cout << "Enter roll to update: ";
//            cin >> key;
//            s.update(key);
//            break;
//
//        case 8:
//            s.stats();
//            break;
//
//        case 9:
//            cout << "Exiting...\n";
//            break;
//
//        default:
//            cout << "Invalid choice!\n";
//        }
//
//    } while (choice != 9);
//
//    return 0;
//}