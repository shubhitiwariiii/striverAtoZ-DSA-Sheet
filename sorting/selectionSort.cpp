// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.
// A sorted array in non-decreasing order is an array where each element is greater than or equal to all previous elements in the array.
#include <iostream>
#include <vector>
using namespace std;

//SELECTION SORT


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){
        int minidx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
    }
    printArray(arr,n);
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);

    return 0;
}