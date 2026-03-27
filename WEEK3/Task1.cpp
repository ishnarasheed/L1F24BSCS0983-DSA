//#include <iostream>
//#include "myStack.h"
//using namespace std;
//int main()
//{
//    int size;
//    cout << "Enter stack size: ";
//    cin >> size;
//
//    myStack<int> s(size);
//    int choice, value;
//    do
//    {
//        cout << "Stack Menu" << endl;
//        cout << "1. Push" << endl;
//        cout << "2. Pop" << endl;
//        cout << "3. Top" << endl;
//        cout << "4. Check if Empty" << endl;
//        cout << "5. Check if Full" << endl;
//        cout << "6. Display Stack" << endl;
//        cout << "0. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter value to push: ";
//            cin >> value;
//            s.push(value);
//            break;
//
//        case 2:
//            if (!s.isEmpty())
//                cout << "Popped element: " << s.pop() << endl;
//            else
//                s.pop();
//            break;
//
//        case 3:
//            if (!s.isEmpty())
//                cout << "Top element: " << s.top() << endl;
//            else
//                s.top();
//            break;
//
//        case 4:
//            if (s.isEmpty())
//                cout << "Stack is empty." << endl;
//            else
//                cout << "Stack is not empty." << endl;
//            break;
//
//        case 5:
//            if (s.isFull())
//                cout << "Stack is full." << endl;
//            else
//                cout << "Stack is not full." << endl;
//            break;
//
//        case 6:
//            s.display();
//            break;
//
//        case 0:
//            cout << "Exiting program..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice. Try again." << endl;
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}