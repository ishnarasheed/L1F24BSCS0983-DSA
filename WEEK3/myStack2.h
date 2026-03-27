
#include <iostream>
#include "AbstractStack2.h"
using namespace std;

template <typename T>
class myStack2 : public AbstractStack2<T>
{
private:
    T* arr;
    int maxSize;
    int topIndex;

public:
    myStack2(int size = 100)
    {
        maxSize = size;
        arr = new T[maxSize];
        topIndex = -1;
    }

    ~myStack2()
    {
        delete[] arr;
    }

    void push(T value) override
    {
        if (isFull())
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++topIndex] = value;
    }

    T pop() override
    {
        if (isEmpty())
        {
            return T();
        }
        return arr[topIndex--];
    }

    T top() const override
    {
        if (isEmpty())
        {
            return T();
        }
        return arr[topIndex];
    }

    bool isEmpty() const override
    {
        return topIndex == -1;
    }

    bool isFull() const override
    {
        return topIndex == maxSize - 1;
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }

        for (int i = topIndex; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};