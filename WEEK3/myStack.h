//#include <iostream>
//#include "AbstractStack.h"
//using namespace std;
//
//template <typename T>
//class myStack : public AbstractStack<T>
//{
//private:
//    T* arr;
//    int maxSize;
//    int topIndex;
//
//public:
//    myStack(int size = 10)
//    {
//        maxSize = size;
//        arr = new T[maxSize];
//        topIndex = -1;
//    }
//    ~myStack()
//    {
//        delete[] arr;
//    }
//    void push(T value) override
//    {
//        if (isFull())
//        {
//            cout << "Stack Overflow! Cannot push " << value << endl;
//            return;
//        }
//        arr[++topIndex] = value;
//        cout << value << " pushed into stack." << endl;
//    }
//    T pop() override
//    {
//        if (isEmpty())
//        {
//            cout << "Stack Underflow! Stack is empty." << endl;
//            return T(); 
//        }
//        return arr[topIndex--];
//    }
//    T top() const override
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty." << endl;
//            return T();
//        }
//        return arr[topIndex];
//    }
//    bool isEmpty() const override
//    {
//        return topIndex == -1;
//    }
//    bool isFull() const override
//    {
//        return topIndex == maxSize - 1;
//    }
//    void display() const
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty." << endl;
//            return;
//        }
//
//        cout << "Stack elements from top to bottom: ";
//        for (int i = topIndex; i >= 0; i--)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//};
