//#include <iostream>
//using namespace std;
//
//int findMax(int arr[], int n) {
//    if (n == 1) { 
//        return arr[0];
//    }
//
//    int maxOfRest = findMax(arr, n - 1);
//
//    if (arr[n - 1] > maxOfRest) {
//        return arr[n - 1];
//    }
//    else {
//        return maxOfRest;
//    }
//}
//
//int main() {
//    int arr[] = { 12, 5, 18, 7, 3 };
//    int size = 5;
//    cout << "Maximum element: " << findMax(arr, size) << endl;
//    return 0;
//}