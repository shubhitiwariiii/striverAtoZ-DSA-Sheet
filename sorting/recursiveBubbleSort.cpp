// Given an array of integers nums, sort the array in non-decreasing order using the recursive Bubble Sort algorithm, and return the sorted array.
// You must implement Bubble Sort using recursion only.
// Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to the previous one.
#include <iostream>
using namespace std;

void bubbleSortRecursive(int arr[], int n) {
    // Base case: If the array size is 1, it is already sorted
    if (n == 1) {
        return;
    }

    // One pass of bubble sort. After this pass, the largest element is moved to the end.
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining array
    bubbleSortRecursive(arr, n - 1);
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSortRecursive(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}