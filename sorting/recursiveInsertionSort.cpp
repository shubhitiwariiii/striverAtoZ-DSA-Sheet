// Given an array of integers nums, sort the array in non-decreasing order using the recursive Insertion Sort algorithm, and return the sorted array.
// You must implement Insertion Sort using recursion only.
// Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all elements that come before it.
#include <iostream>
using namespace std;

void insertionSortRecursive(int arr[], int n) {
    // Base case: If the array size is 1 or less, it is already sorted
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert the nth element into the sorted sequence
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-2], that are greater than last,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
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

    insertionSortRecursive(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}