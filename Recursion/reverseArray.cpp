// Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.
#include <iostream>
using namespace std;

// void reverseArray(int arr[], int start, int end) {
//     if (start >= end) {
//         return;
//     }
//     swap(arr[start], arr[end]);
//     reverseArray(arr, start + 1, end - 1);
// }
void reverseArray(int arr[], int start, int end) {
    int st = start, en = end;
    while(st < en) {
        swap(arr[st], arr[en]);
        st++;
        en--;
    }
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
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    reverseArray(arr, 0, n - 1);
    
    cout << "\nReversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}