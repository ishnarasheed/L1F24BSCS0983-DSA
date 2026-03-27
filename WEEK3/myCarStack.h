//#pragma once
//#ifndef MYCARSTACK_H
//#define MYCARSTACK_H
//
//#include <iostream>
//#include <string>
//#include "AbstractStackCar.h"
//using namespace std;
//
//template <typename T>
//class myCarStack : public AbstractStackCar<T>
//{
//private:
//    T* arr;
//    int maxSize;
//    int topIndex;
//
//public:
//  
//    myCarStack(int size = 8)
//    {
//        maxSize = size;
//        arr = new T[maxSize];
//        topIndex = -1;
//    }
//    ~myCarStack()
//    {
//        delete[] arr;
//    }
//    void push(T value) override
//    {
//        if (isFull())
//        {
//            cout << "Parking is full. Cannot park more cars.\n";
//            return;
//        }
//
//        arr[++topIndex] = value;
//        cout << "Car " << value << " parked successfully.\n";
//    }
//    T pop() override
//    {
//        if (isEmpty())
//        {
//            cout << "Parking is empty.\n";
//            return T();
//        }
//
//        return arr[topIndex--];
//    }
//    T top() const override
//    {
//        if (isEmpty())
//        {
//            cout << "Parking is empty.\n";
//            return T();
//        }
//
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
//            cout << "No cars parked.\n";
//            return;
//        }
//
//        cout << "\nCars currently parked (top to bottom):\n";
//        for (int i = topIndex; i >= 0; i--)
//        {
//            cout << arr[i] << endl;
//        }
//    }
//    int totalCars() const
//    {
//        return topIndex + 1;
//    }
//    bool searchCar(T carNumber) const
//    {
//        for (int i = topIndex; i >= 0; i--)
//        {
//            if (arr[i] == carNumber)
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//    void removeCar(T carNumber)
//    {
//        if (isEmpty())
//        {
//            cout << "Parking is empty.\n";
//            return;
//        }
//
//        if (!searchCar(carNumber))
//        {
//            cout << "Car " << carNumber << " not found in parking lot.\n";
//            return;
//        }
//
//        myCarStack<T> tempStack(maxSize);
//
//        while (!isEmpty() && top() != carNumber)
//        {
//            tempStack.push(pop());
//        }
//
//        if (!isEmpty() && top() == carNumber)
//        {
//            pop();
//            cout << "Car " << carNumber << " removed from parking lot.\n";
//        }
//        while (!tempStack.isEmpty())
//        {
//            push(tempStack.pop());
//        }
//    }
//};
//
//#endif