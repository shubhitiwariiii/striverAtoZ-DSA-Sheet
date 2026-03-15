#include<bits/stdc++.h>
using namespace std;

//BRUTE FORCE -> TC: O(NLogN + N) and SC : O(N)

int removeDuplicates(int arr[], int n){
    set<int> st;
    for(int i=0; i<n; i++){ // O(NLogN)
        st.insert(arr[i]);
    }

    int idx = 0;
    for(auto it : st){ //O(N)
        arr[idx] = it;
        idx++;
    }
    return idx;
}

//OPTIMAL APPROACH -> TC : O(N), SC : O(1)

int removeDuplicates(int arr[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout << "enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "enter elements of an array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int newSize = removeDuplicates(arr, n);  // store returned size

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < newSize; i++){
        cout << arr[i] << " ";
    }
  
    return 0;
}