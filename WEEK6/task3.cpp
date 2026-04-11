#include <iostream>
using namespace std;

class Queue {
    string arr[100];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(string x) 
    {
        if (rear == 99)
        {
            cout << "Queue Full\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    string dequeue() 
    {
        if (isEmpty())
        {
            return "EMPTY";
        }
        return arr[front++];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

class Airport
{
    Queue emergencyQ, passengerQ, cargoQ;

public:
    // enqueue flight
    void enqueue(string type, string id)
    {
        if (type == "E")
            emergencyQ.enqueue("E-" + id);
        else if (type == "P")
            passengerQ.enqueue("P-" + id);
        else if (type == "C")
            cargoQ.enqueue("C-" + id);
    }

    // dequeue based on priority
    void dequeue() 
    {
        if (!emergencyQ.isEmpty()) {
            cout << "Landing: " << emergencyQ.dequeue() << endl;
        }
        else if (!passengerQ.isEmpty()) {
            cout << "Landing: " << passengerQ.dequeue() << endl;
        }
        else if (!cargoQ.isEmpty()) {
            cout << "Landing: " << cargoQ.dequeue() << endl;
        }
        else {
            cout << "No flights waiting!\n";
        }
    }

    // display all queues
    void display()
    {
        cout << "\nEmergency Queue: ";
        emergencyQ.display();

        cout << "Passenger Queue: ";
        passengerQ.display();

        cout << "Cargo Queue: ";
        cargoQ.display();
    }
};

// -------- MAIN --------
int main() {
    Airport ap;

    // Given sequence
    ap.enqueue("P", "P1");
    ap.enqueue("C", "C1");
    ap.enqueue("E", "E1");
    ap.enqueue("P", "P2");
    ap.enqueue("C", "C2");
    ap.enqueue("E", "E2");

    ap.display();

    cout << "\n--- Landing Order ---\n";
    ap.dequeue();
    ap.dequeue();
    ap.dequeue();
    ap.dequeue();
    ap.dequeue();
    ap.dequeue();

    return 0;
}