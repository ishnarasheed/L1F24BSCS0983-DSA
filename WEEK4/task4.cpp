//#include <iostream>
//using namespace std;
//class TicketQueue 
//{
//private:
//    int arr[100];
//    int front, rear;
//
//public:
//    TicketQueue() 
//    {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty()
//    {
//        return (front > rear);
//    }
//    void enqueue(int id)
//    {
//        rear++;
//        arr[rear] = id;
//        cout << "Ticket added: " << id << endl;
//    }
//    void dequeue()
//    {
//        if (isEmpty()) 
//        {
//            cout << "No tickets available\n";
//            return;
//        }
//        cout << "Resolved ticket: " << arr[front] << endl;
//        front++;
//    }
//    void frontTicket() 
//    {
//        if (isEmpty())
//        {
//            cout << "No tickets available\n";
//            return;
//        }
//
//        cout << "Next ticket: " << arr[front] << endl;
//    }
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "No pending tickets\n";
//            return;
//        }
//
//        cout << "Pending tickets: ";
//        for (int i = front; i <= rear; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() 
//{
//    TicketQueue tq;
//    int choice, id;
//
//    do {
//        cout << "\n1. Add Ticket\n";
//        cout << "2. Resolve Ticket\n";
//        cout << "3. View Next Ticket\n";
//        cout << "4. Display Tickets\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter 4-digit Ticket ID: ";
//            cin >> id;
//            tq.enqueue(id);
//            break;
//
//        case 2:
//            tq.dequeue();
//            break;
//
//        case 3:
//            tq.frontTicket();
//            break;
//
//        case 4:
//            tq.display();
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