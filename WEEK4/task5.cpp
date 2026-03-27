//#include <iostream>
//using namespace std;
//class PrintQueue 
//{
//private:
//    string arr[100];
//    int front, rear;
//
//public:
//    PrintQueue()
//    {
//        front = 0;
//        rear = -1;
//    }
//    bool isEmpty() 
//    {
//        return (front > rear);
//    }
//    void enqueue(string doc)
//    {
//        rear++;
//        arr[rear] = doc;
//        cout << "Added: " << doc << endl;
//    }
//    void dequeue() 
//    {
//        if (isEmpty())
//        {
//            cout << "No documents to print\n";
//            return;
//        }
//
//        cout << "Printing: " << arr[front] << endl;
//        front++;
//    }
//    void frontDoc()
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is empty\n";
//            return;
//        }
//
//        cout << "Next document: " << arr[front] << endl;
//    }
//    void display()
//    {
//        if (isEmpty()) 
//        {
//            cout << "No pending documents\n";
//            return;
//        }
//
//        cout << "Documents in queue: ";
//        for (int i = front; i <= rear; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//int main() {
//    PrintQueue pq;
//    int choice;
//    string doc;
//
//    do {
//        cout << "\n1. Add Document\n";
//        cout << "2. Print Document\n";
//        cout << "3. View Front\n";
//        cout << "4. Display Queue\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter document name: ";
//            cin >> doc;
//            pq.enqueue(doc);
//            break;
//
//        case 2:
//            pq.dequeue();
//            break;
//
//        case 3:
//            pq.frontDoc();
//            break;
//
//        case 4:
//            pq.display();
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