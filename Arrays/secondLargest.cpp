#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    int sLargest = INT_MIN; // Assuming all elements are non-negative
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i] > sLargest && arr[i] != largest){
            sLargest = arr[i];
        }
    }
    cout << sLargest;

    return 0;
}
