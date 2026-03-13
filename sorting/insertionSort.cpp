#include<bits/stdc++.h>
using namespace std;

//INSERTION SORT -> takes an element and place it in correct position.

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void insertionSort(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev >= 0 && arr[prev] > curr){
//             swap(arr[prev], arr[prev+1]);
//             prev--;
//         }
//         arr[prev+1] = curr;
//     }
//     printArray(arr,n);
// }

void insertionSort(int arr[],int n){
    for(int i=0; i<n; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[i]){
            swap(arr[j-1], arr[j]);
            j--;
        }
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

    insertionSort(arr, n);

    return 0;
}