#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}



int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //BETTER APPROACH

    // int largest = arr[0];
    // int sLargest = INT_MIN; // Assuming all elements are non-negative
    // for(int i=0; i<n; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }
    // for(int i=0; i<n; i++){
    //     if(arr[i] > sLargest && arr[i] != largest){
    //         sLargest = arr[i];
    //     }
    // }
    // cout << sLargest;

    //OPTIMAL APPROACH
    
    int sLargest = secondLargest(arr,n);
    int sSmallest = secondSmallest(arr,n);
    cout <<"second largest is : " << sLargest << " second smallest is : " << sSmallest;


    return 0;
}
