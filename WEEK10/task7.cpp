//#include <iostream>
//using namespace std;
//
//// Recursive Subset Sum Check [cite: 101, 106]
//bool canFormSum(int arr[], int n, int target, int excludeIndex) {
//    if (target == 0) return true;
//    if (n == 0) return false;
//
//    // Skip the index of the "magic number" candidate [cite: 101]
//    if (n - 1 == excludeIndex) return canFormSum(arr, n - 1, target, excludeIndex);
//
//    // Include element or exclude element
//    bool exclude = canFormSum(arr, n - 1, target, excludeIndex);
//    bool include = false;
//    if (arr[n - 1] <= target) {
//        include = canFormSum(arr, n - 1, target - arr[n - 1], excludeIndex);
//    }
//    return include || exclude;
//}
//
//int main() {
//    int arr[] = { 2, 3, 5, 8, 13 };
//    int n = 5;
//   
//    if (canFormSum(arr, n, 13, 4)) {
//        cout << "Magic Number Found: 13" << endl; // [cite: 114]
//    }
//    else {
//        cout << "-1" << endl;
//    }
//    return 0;
//}