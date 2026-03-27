//#include <iostream>
//using namespace std;
//template <typename T>
//class AbstractQueue 
//{
//  public:
//    virtual void enQueue(T value) = 0;
//    virtual T deQueue() = 0;
//    virtual T front() const = 0;
//    virtual bool isEmpty() const = 0;
//    virtual bool isFull() const = 0;
//    virtual ~AbstractQueue() {}
//};
//template <typename T>
//class myQueue : public AbstractQueue<T>
//{
//  private:
//    T* arr;
//    int frontIndex;
//    int rearIndex;
//    int capacity;
//  public:
//    myQueue(int size) 
//    {
//        capacity = size;
//        arr = new T[capacity];
//        frontIndex = -1;
//        rearIndex = -1;
//    }
//    ~myQueue()
//    {
//        delete[] arr;
//    }
//    void enQueue(T value) 
//    {
//        if (isFull()) 
//        {
//            cout << "Queue is Full!\n";
//            return;
//        }
//        if (isEmpty())
//        {
//            frontIndex = 0;
//        }
//        rearIndex++;
//        arr[rearIndex] = value;
//        cout << "Inserted: " << value << endl;
//    }
//    T deQueue()
//    {
//        if (isEmpty()) 
//        {
//            cout << "Queue is Empty!\n";
//            return T(); 
//        }
//        T remove = arr[frontIndex];
//        frontIndex++;
//
//        if (frontIndex > rearIndex)
//        {
//            frontIndex = rearIndex = -1;
//        }
//
//        return remove;
//    }
//    T front() const
//    {
//        if (isEmpty())
//        {
//            cout << "Queue is Empty!\n";
//            return T();
//        }
//        return arr[frontIndex];
//    }
//    bool isEmpty() const
//    {
//        return (frontIndex == -1);
//    }
//    bool isFull() const 
//    {
//        return (rearIndex == capacity - 1);
//    }
//    void display() const {
//        if (isEmpty()) {
//            cout << "Queue is Empty!\n";
//            return;
//        }
//
//        cout << "Queue elements: ";
//        for (int i = frontIndex; i <= rearIndex; i++) {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//// 4. Main Function
//int main() {
//    int size;
//    cout << "Enter Queue Size: ";
//    cin >> size;
//
//    myQueue<int> q(size);
//
//    int choice, value;
//
//    do {
//        cout << "\n--- Queue Menu ---\n";
//        cout << "1. Enqueue\n";
//        cout << "2. Dequeue\n";
//        cout << "3. Front\n";
//        cout << "4. Check Empty\n";
//        cout << "5. Check Full\n";
//        cout << "6. Display\n";
//        cout << "0. Exit\n";
//        cout << "Enter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//            q.enQueue(value);
//            break;
//
//        case 2:
//            cout << "Removed: " << q.deQueue() << endl;
//            break;
//
//        case 3:
//            cout << "Front element: " << q.front() << endl;
//            break;
//
//        case 4:
//            if (q.isEmpty())
//            {
//                cout << "Queue is Empty\n";
//            }
//            else
//            {
//                cout << "Queue is Not Empty\n";
//            }
//            break;
//
//        case 5:
//            if (q.isFull()) 
//            {
//                cout << "Queue is Full\n";
//            }
//            else {
//                cout << "Queue is Not Full\n";
//            }
//            break;
//
//        case 6:
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