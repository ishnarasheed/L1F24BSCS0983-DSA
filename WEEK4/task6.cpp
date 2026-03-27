#include <iostream>
using namespace std;
struct Package
{
    int id;
    string address;
    int startTime;
    int endTime;
};
class DeliveryQueue 
{
private:
    Package arr[100];
    int front, rear;

public:
    DeliveryQueue() 
    {
        front = 0;
        rear = -1;
    }

    bool isEmpty()
    {
        return (front > rear);
    }

    // Add package
    void enqueue(Package p)
    {
        rear++;
        arr[rear] = p;
        cout << "Package added: " << p.id << endl;
    }

    // Check if can deliver
    bool timeToDeliver(int currentTime)
    {
        if (isEmpty()) {
            cout << "No packages\n";
            return false;
        }

        Package p = arr[front];

        if (currentTime >= p.startTime && currentTime <= p.endTime)
        {
            return true;
        }
        else {
            cout << "Package " << p.id << " expired\n";
            return false;
        }
    }
    void dequeue(int currentTime) 
    {
        if (isEmpty())
        {
            cout << "No packages to deliver\n";
            return;
        }

        if (timeToDeliver(currentTime))
        {
            cout << "Delivered package: " << arr[front].id << endl;
            front++;
        }
        else {
            front++; 
        }
    }
    void frontPackage() 
    {
        if (isEmpty())
        {
            cout << "No packages\n";
            return;
        }

        cout << "Next package: " << arr[front].id
            << " Address: " << arr[front].address << endl;
    }
    void display()
    {
        if (isEmpty()) 
        {
            cout << "No packages in queue\n";
            return;
        }

        for (int i = front; i <= rear; i++) 
        {
            cout << "ID: " << arr[i].id
                << " Address: " << arr[i].address
                << " Time: " << arr[i].startTime
                << "-" << arr[i].endTime << endl;
        }
    }
};
int main() 
{
    DeliveryQueue dq;
    int choice, currentTime;

    do {
        cout << "\n1. Add Package\n";
        cout << "2. Deliver Package\n";
        cout << "3. View Front\n";
        cout << "4. Display All\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Package p;
            cout << "Enter ID: ";
            cin >> p.id;
            cout << "Enter Address: ";
            cin >> p.address;
            cout << "Enter Start Time: ";
            cin >> p.startTime;
            cout << "Enter End Time: ";
            cin >> p.endTime;

            dq.enqueue(p);
            break;
        }

        case 2:
            cout << "Enter current time: ";
            cin >> currentTime;
            dq.dequeue(currentTime);
            break;

        case 3:
            dq.frontPackage();
            break;

        case 4:
            dq.display();
            break;

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);

    return 0;
}