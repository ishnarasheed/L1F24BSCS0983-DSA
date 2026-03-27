//#include <iostream>
//using namespace std;
//class Queue 
//{
//private:
//    int arr[100];
//    int front, rear;
//
//public:
//    Queue() {
//        front = 0;
//        rear = -1;
//    }
//
//    bool isEmpty() 
//    {
//        return (front > rear);
//    }
//
//    void enqueue(int x) 
//    {
//        rear++;
//        arr[rear] = x;
//    }
//
//    int dequeue()
//    {
//        if (isEmpty()) 
//        {
//            cout << "Queue Empty\n";
//            return -1;
//        }
//        return arr[front++];
//    }
//
//    int getFront()
//    {
//        return arr[front];
//    }
//
//    int size() 
//    {
//        return (rear - front + 1);
//    }
//
//    void display()
//    {
//        for (int i = front; i <= rear; i++)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
//void reverseK(Queue& q, int k) 
//{
//    int n = q.size();
//
//    if (k <= 1 || k > n)
//    {
//        return;
//    }
//
//    int stack[100];
//    int top = -1;
//
//    for (int i = 0; i < k; i++) 
//    {
//        stack[++top] = q.dequeue();
//    }
//    while (top != -1)
//    {
//        q.enqueue(stack[top--]);
//    }
//    for (int i = 0; i < n - k; i++) {
//        q.enqueue(q.dequeue());
//    }
//}
//
//int main() {
//    Queue q;
//    int n, x, k;
//
//    cout << "Enter number of elements: ";
//    cin >> n;
//
//    cout << "Enter elements:\n";
//    for (int i = 0; i < n; i++) {
//        cin >> x;
//        q.enqueue(x);
//    }
//
//    cout << "Enter K: ";
//    cin >> k;
//
//    reverseK(q, k);
//
//    cout << "Output: ";
//    q.display();
//
//    return 0;
//}