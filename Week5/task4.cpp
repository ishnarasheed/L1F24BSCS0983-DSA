//#include <iostream>
//#include <string>
//using namespace std;
//class Patient
//{
//public:
//    string name;
//    Patient* next;
//
//    Patient(string n)
//    {
//        name = n;
//        next = nullptr;
//    }
//};
//class PatientQueue 
//{
//private:
//    Patient* head;
//
//public:
//    PatientQueue() 
//    {
//        head = nullptr;
//    }
//
//    // Add patient at the end of the queue
//    void addPatient(string name) 
//    {
//        Patient* newPatient = new Patient(name);
//
//        if (head == nullptr)
//        {  
//            head = newPatient;
//        }
//        else 
//        {
//            Patient* temp = head;
//            while (temp->next != nullptr) 
//            {
//                temp = temp->next;
//            }
//            temp->next = newPatient;
//        }
//
//        cout << "Patient " << name << " added to the queue.\n";
//    }
//
//    void removePatient(string name)
//    {
//        if (head == nullptr) 
//        {
//            cout << "Queue is empty. No patient to remove.\n";
//            return;
//        }
//
//        if (head->name == name) {
//            Patient* temp = head;
//            head = head->next;
//            delete temp;
//            cout << "Patient " << name << " removed from the queue.\n";
//            return;
//        }
//
//        Patient* temp = head;
//        Patient* prev = nullptr;
//
//        while (temp != nullptr && temp->name != name)
//        {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (temp == nullptr)
//        {
//            cout << "Patient " << name << " not found in the queue.\n";
//            return;
//        }
//
//        prev->next = temp->next;
//        delete temp;
//        cout << "Patient " << name << " removed from the queue.\n";
//    }
//
//    void displayQueue()
//    {
//        if (head == nullptr) 
//        {
//            cout << "Queue is empty.\n";
//            return;
//        }
//
//        cout << "Current queue: ";
//        Patient* temp = head;
//        while (temp != nullptr)
//        {
//            cout << temp->name;
//            if (temp->next != nullptr) cout << " -> ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//
//    void countPatients() 
//    {
//        int count = 0;
//        Patient* temp = head;
//        while (temp != nullptr) 
//        {
//            count++;
//            temp = temp->next;
//        }
//        cout << "Total patients in queue: " << count << endl;
//    }
//};
//
//int main() {
//    PatientQueue queue;
//
// 
//    queue.addPatient("Alice");
//    queue.addPatient("Bob");
//    queue.addPatient("Charlie");
//    queue.displayQueue();
//    queue.countPatients();
//
//    queue.removePatient("Bob");
//    queue.displayQueue();
//    queue.countPatients();
//
//    queue.addPatient("David");
//    queue.displayQueue();
//    queue.countPatients();
//
//    queue.removePatient("Eve"); 
//    queue.displayQueue();
//    queue.countPatients();
//
//    return 0;
//}