//#include <iostream>
//#include "myStack1.h"
//using namespace std;
//
//int main()
//{
//    int size;
//    cout << "Enter stack size: ";
//    cin >> size;
//
//    myStack1<int> s(size);
//
//    int choice, value;
//
//    do
//    {
//        cout << "\n===== Stack Menu =====" << endl;
//        cout << "1. Push element" << endl;
//        cout << "2. Pop element" << endl;
//        cout << "3. Show top element" << endl;
//        cout << "4. Check if stack is empty" << endl;
//        cout << "5. Check if stack is full" << endl;
//        cout << "6. Display stack elements" << endl;
//        cout << "7. Show minimum element" << endl;
//        cout << "8. Exit" << endl;
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
//        case 7:
//            if (!s.isEmpty())
//                cout << "Minimum element: " << s.getMin() << endl;
//            else
//                s.getMin();
//            break;
//
//        case 8:
//            cout << "Exiting program..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice. Try again." << endl;
//        }
//
//    } while (choice != 8);
//
//    return 0;
//}