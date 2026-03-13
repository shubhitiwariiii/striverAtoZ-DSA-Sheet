#include<bits/stdc++.h>
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
        int minIdx = i;
        for(int j=i; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[minIdx],arr[i]);
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