//#include <iostream>
//#include <stack>
//using namespace std;
//template <typename T>
//class QueueUsingStacks
//{
//private:
//    stack<T> stack1;
//    stack<T> stack2;
//    void transfer()
//    {
//        cout << "Transferring elements from stack1 to stack2...\n";
//
//        while (!stack1.empty()) {
//            cout << "Moving: " << stack1.top() << endl;
//            stack2.push(stack1.top());
//            stack1.pop();
//        }
//
//        cout << "Transfer complete!\n";
//    }
//public:
//    void enqueue(T value)
//    {
//        stack1.push(value);
//        cout << "Inserted: " << value << endl;
//    }
//    T dequeue()
//    {
//        if (stack2.empty()) 
//        {
//            cout << "stack2 is empty\n";
//
//            if (stack1.empty()) 
//            {
//                cout << "Queue is Empty!\n";
//                return T();
//            }
//
//            transfer();
//        }
//        cout << "Removing from stack2: " << stack2.top() << endl;
//
//        T removed = stack2.top();
//        stack2.pop();
//        return removed;
//    }
//    T front()
//    {
//        if (stack2.empty()) 
//        {
//            if (stack1.empty())
//            {
//                cout << "Queue is Empty!\n";
//                return T();
//            }
//            transfer();
//        }
//
//        return stack2.top();
//    }
//    void display()
//    {
//        if (stack1.empty() && stack2.empty()) 
//        {
//            cout << "Queue is Empty!\n";
//            return;
//        }
//
//        cout << "\nStack2 (front side): ";
//        stack<T> temp2 = stack2;
//        while (!temp2.empty())
//        {
//            cout << temp2.top() << " ";
//            temp2.pop();
//        }
//
//        cout << "\nStack1 (rear side): ";
//        stack<T> temp1 = stack1;
//        while (!temp1.empty())
//        {
//            cout << temp1.top() << " ";
//            temp1.pop();
//        }
//
//        cout << endl;
//    }
//};
//
//int main() 
//{
//    QueueUsingStacks<int> q;
//    int choice, value;
//    do 
//    {
//        cout << "\n--- Queue Using Two Stacks ---\n";
//        cout << "1. Enqueue\n";
//        cout << "2. Dequeue\n";
//        cout << "3. Front\n";
//        cout << "4. Display\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            q.enqueue(value);
//            break;
//
//        case 2:
//            cout << "Removed: " << q.dequeue() << endl;
//            break;
//
//        case 3:
//            cout << "Front element: " << q.front() << endl;
//            break;
//
//        case 4:
//            cout << "Queue elements: ";
//            q.display();
//            break;
//
//        case 0:
//            cout << "Exiting...\n";
//            break;
//
//        default:
//            cout << "Invalid choice!\n";
//        }
//
//    } while (choice != 0);
//
//    return 0;
//}