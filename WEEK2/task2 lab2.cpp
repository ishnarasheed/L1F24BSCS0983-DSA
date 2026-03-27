//#include <iostream>
//using namespace std;
//class Employee
//{
//public:
//    virtual double calculateSalary() = 0;
//};
//class FullTimeEmp : public Employee
//{
//private:
//    double salary;
//
//public:
//    FullTimeEmp(double s) 
//    {
//        salary = s;
//    }
//
//    double calculateSalary() 
//    {
//        return salary;
//    }
//};
//class PartTimeEmp: public Employee 
//{
//private:
//    int hoursWorked;
//    double hourlyRate;
//
//public:
//    PartTimeEmp(int h, double r)
//    {
//        hoursWorked = h;
//        hourlyRate = r;
//    }
//
//    double calculateSalary() 
//    {
//        return hoursWorked * hourlyRate;
//    }
//};
//
//int main() 
//{
//    FullTimeEmp e1(50000);
//    PartTimeEmp e2(20, 500);
//
//    cout << "Full Time  Salary of Employee  : " << e1.calculateSalary() << endl;
//    cout << "Part Time  Salary of Employee : " << e2.calculateSalary() << endl;
//
//    return 0;
//}