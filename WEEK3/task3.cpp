//#include <iostream>
//#include <string>
//#include "myCarStack.h"
//using namespace std;
//
//int main()
//{
//    myCarStack<string> parking(8);
//    int choice;
//    string carNumber;
//
//    do
//    {
//        cout << "\nParking Lot Management System \n";
//        cout << "1. Park a new car\n";
//        cout << "2. Remove a car by car number\n";
//        cout << "3. View currently parked cars\n";
//        cout << "4. View total cars parked\n";
//        cout << "5. View top car\n";
//        cout << "6. Search for a car\n";
//        cout << "7. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter car number: ";
//            cin >> carNumber;
//            parking.push(carNumber);
//            break;
//
//        case 2:
//            cout << "Enter car number to remove: ";
//            cin >> carNumber;
//            parking.removeCar(carNumber);
//            break;
//
//        case 3:
//            parking.display();
//            break;
//
//        case 4:
//            cout << "Total cars parked: " << parking.totalCars() << endl;
//            break;
//
//        case 5:
//            if (!parking.isEmpty())
//            {
//                cout << "Top car: " << parking.top() << endl;
//            }
//            else
//            {
//                parking.top();
//            }
//            break;
//
//        case 6:
//            cout << "Enter car number to search: ";
//            cin >> carNumber;
//            if (parking.searchCar(carNumber))
//            {
//                cout << "Car " << carNumber << " is present in parking lot.\n";
//            }
//            else
//            {
//                cout << "Car " << carNumber << " is not present in parking lot.\n";
//            }
//            break;
//
//        case 7:
//            cout << "Exiting program...\n";
//            break;
//
//        default:
//            cout << "Invalid choice. Try again.\n";
//        }
//
//    } while (choice != 7);
//
//    return 0;
//}