#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] >= pivot && j > low){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[],int low, int high){
    if(low<high){
        int pIdx = partition(arr,low,high);
        quickSort(arr,low,pIdx-1);
        quickSort(arr,pIdx+1, high);
    }
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