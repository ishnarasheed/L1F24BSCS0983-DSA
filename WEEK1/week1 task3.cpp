//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename T>
//int linearSearch(T arr[], int size, T key)
//{
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] == key)
//            return i;
//    }
//    return -1;
//}
//
//
//template <typename T>
//void printSearchResult(int index, T key)
//{
//    if (index != -1)
//        cout << "Value \"" << key << "\" found at index: " << index << endl;
//    else
//        cout << "Value \"" << key << "\" not found." << endl;
//}
//
//int main()
//{
//    // Test with an integer array
//    int iArray[5] = { 64, 25, 12, 22, 11 };
//    int iKey = 12;
//    int iIndex = linearSearch(iArray, 5, iKey);
//    printSearchResult(iIndex, iKey);
//
//    // Test with a float array
//    float fArray[4] = { 3.14, 2.71, 1.62, 0.57 };
//    float fKey = 1.62;
//    int floatIndex = linearSearch(fArray, 4, fKey);
//    printSearchResult(floatIndex, fKey);
//
//    // Test with a string array
//    string sArray[4] = { "apple", "orange", "banana", "grape" };
//    string sKey = "banana";
//    int sIndex = linearSearch(sArray, 4, sKey);
//    printSearchResult(sIndex, sKey);
//
//    return 0;
//}