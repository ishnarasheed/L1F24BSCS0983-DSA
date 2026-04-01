//#include <iostream>
//#include <string>
//using namespace std;
//class Student 
//{
//public:
//    string name;
//    int priority; 
//    Student* next;
//
//    Student(string n, int p = 0)
//    {
//        name = n;
//        priority = p;
//        next = nullptr;
//    }
//};
//class ReservationQueue
//{
//private:
//    Student* head;
//
//public:
//    ReservationQueue() {
//        head = nullptr;
//    }
//
//    // Add a new student to the reservation list 
//    void addStudent(string name, int priority = 0)
//    {
//        Student* newStudent = new Student(name, priority);
//
//        if (!head || head->priority < priority)
//        {
//            // Insert at front if queue empty or new has higher priority
//            newStudent->next = head;
//            head = newStudent;
//        }
//        else 
//        {
//            // Insert at correct position based on priority
//            Student* temp = head;
//            while (temp->next && temp->next->priority >= priority)
//            {
//                temp = temp->next;
//            }
//            newStudent->next = temp->next;
//            temp->next = newStudent;
//        }
//
//        cout << "Student " << name << " added with priority " << priority << ".\n";
//    }
//
//    // Remove a student if they cancel
//    void removeStudent(string name) 
//    {
//        if (!head) {
//            cout << "Reservation list is empty.\n";
//            return;
//        }
//
//        if (head->name == name)
//        {
//            Student* temp = head;
//            head = head->next;
//            delete temp;
//            cout << "Student " << name << " removed from reservation list.\n";
//            return;
//        }
//
//        Student* temp = head;
//        Student* prev = nullptr;
//        while (temp && temp->name != name) {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (!temp) {
//            cout << "Student " << name << " not found.\n";
//            return;
//        }
//
//        prev->next = temp->next;
//        delete temp;
//        cout << "Student " << name << " removed from reservation list.\n";
//    }
//
//    // Update a student's priority
//    void updatePriority(string name, int newPriority)
//    {
//        if (!head)
//        {
//            cout << "Reservation list is empty.\n";
//            return;
//        }
//
//        // Remove the student first
//        Student* temp = head;
//        Student* prev = nullptr;
//        while (temp && temp->name != name) 
//        {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (!temp)
//        {
//            cout << "Student " << name << " not found.\n";
//            return;
//        }
//
//        // Remove node
//        if (!prev)
//            head = head->next;
//        else
//            prev->next = temp->next;
//
//        // Reinsert with new priority
//        addStudent(name, newPriority);
//        delete temp;
//    }
//    void display() 
//    {
//        if (!head)
//        {
//            cout << "Reservation list is empty.\n";
//            return;
//        }
//        Student* temp = head;
//        cout << "Reservation queue: ";
//        while (temp) {
//            cout << temp->name << "(P" << temp->priority << ")";
//            if (temp->next) cout << " -> ";
//            temp = temp->next;
//        }
//        cout << endl;
//    }
//
//    // Count students
//    void countStudents() 
//    {
//        int count = 0;
//        Student* temp = head;
//        while (temp)
//        {
//            count++;
//            temp = temp->next;
//        }
//        cout << "Total students in queue: " << count << endl;
//    }
//
//    // Remove student at front when book is returned
//    void serveFront() 
//    {
//        if (!head)
//        {
//            cout << "Reservation list is empty. No student to serve.\n";
//            return;
//        }
//        Student* temp = head;
//        head = head->next;
//        cout << "Book served to student: " << temp->name << endl;
//        delete temp;
//    }
//};
//
//// Book class with its own reservation queue
//class Book
//{
//public:
//    string title;
//    ReservationQueue queue;
//
//    Book(string t)
//    {
//        title = t;
//    }
//};
//
//int main()
//{
//    Book book1("Data Structures");
//    Book book2("Algorithms");
//
//  
//    book1.queue.addStudent("Alice", 2);
//    book1.queue.addStudent("Bob", 1);
//    book1.queue.addStudent("Charlie", 3);
//
//    
//    book2.queue.addStudent("David", 1);
//    book2.queue.addStudent("Eve", 2);
//
//
//    cout << "\nBook: " << book1.title << endl;
//    book1.queue.display();
//    book1.queue.countStudents();
//
//    cout << "\nBook: " << book2.title << endl;
//    book2.queue.display();
//    book2.queue.countStudents();
//
//  
//    cout << "\nBob cancels reservation for Data Structures:\n";
//    book1.queue.removeStudent("Bob");
//    book1.queue.display();
//
//   
//    cout << "\nAlice's priority updated to 4 for Data Structures:\n";
//    book1.queue.updatePriority("Alice", 4);
//    book1.queue.display();
//
// 
//    cout << "\nBook Data Structures returned:\n";
//    book1.queue.serveFront();
//    book1.queue.display();
//
//    return 0;
//}