#include <bits/stdc++.h>
using namespace std;

//BUBBLE SORT -> push the maximum to the last
//selection sort -> search the minimum and swap it.

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
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

    bubbleSort(arr, n);

    return 0;
}