// Given an array of integers called nums, sort the array in non-decreasing order using the quick sort algorithm and return the sorted array.
//A sorted array in non-decreasing order is an array where each element is greater than or equal to all preceding elements in the array.

#include <iostream>
#include <vector>
#include<string>
using namespace std;

//QUICK SORT
int partition(int arr[], int si, int ei){
    int i = si - 1;
    int pivot = arr[ei];

    for(int j=si; j<ei; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    //pivotIdx = i
    return i;
}

void quickSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
     
    int pivotIdx = partition(arr,si,ei);

    quickSort(arr,si,pivotIdx-1);
    quickSort(arr,pivotIdx+1,ei);
}

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
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

    quickSort(arr,0,n-1);
    printArray(arr,n);

    return 0;
}