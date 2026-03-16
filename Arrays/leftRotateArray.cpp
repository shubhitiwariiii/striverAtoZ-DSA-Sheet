#include<bits/stdc++.h>
using namespace std;


int leftRotateArray(int a[], int n){
    int temp = a[0];
    for(int i=1; i<n; i++){
        a[i-1] = a[i];
    }
    a[n-1] = temp;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = leftRotateArray(a,n);
    cout << "after rotating array by one place is: " << endl;
    for(int ans : a){
        cout << ans << " ";
    }
    

    return 0;
}