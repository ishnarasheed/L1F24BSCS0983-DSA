//#include <iostream>
//#include "AbstractStack1.h"
//using namespace std;
//
//template <typename T>
//class myStack1 : public AbstractStack1<T>
//{
//private:
//    T* arr;     
//    T* minArr;    
//    int maxSize;     
//    int topIndex;    
//    int minTop;     
//
//public:
//
//    myStack1(int size = 10)
//    {
//        maxSize = size;
//        arr = new T[maxSize];
//        minArr = new T[maxSize];
//        topIndex = -1;
//        minTop = -1;
//    }
//
//    ~myStack1()
//    {
//        delete[] arr;
//        delete[] minArr;
//    }
//
//    void push(T value) override
//    {
//        if (isFull())
//        {
//            cout << "Stack Overflow! Cannot push " << value << endl;
//            return;
//        }
//
//        arr[++topIndex] = value;
//
//        if (minTop == -1 || value <= minArr[minTop])
//        {
//            minArr[++minTop] = value;
//        }
//
//        cout << value << " pushed into stack." << endl;
//    }
//
//    T pop() override
//    {
//        if (isEmpty())
//        {
//            cout << "Stack Underflow! Stack is empty." << endl;
//            return T();
//        }
//
//        T poppedValue = arr[topIndex--];
//
//        if (poppedValue == minArr[minTop])
//        {
//            minTop--;
//        }
//
//        return poppedValue;
//    }
//
//    T top() const override
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty." << endl;
//            return T();
//        }
//
//        return arr[topIndex];
//    }
//
//    bool isEmpty() const override
//    {
//        return topIndex == -1;
//    }
//
//    bool isFull() const override
//    {
//        return topIndex == maxSize - 1;
//    }
//
//    void display() const
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty." << endl;
//            return;
//        }
//
//        cout << "Stack elements top to bottom: ";
//        for (int i = topIndex; i >= 0; i--)
//        {
//            cout << arr[i] << " ";
//        }
//        cout << endl;
//    }
//
//    T getMin() const
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty. No minimum element." << endl;
//            return T();
//        }
//
//        return minArr[minTop];
//    }
//};
