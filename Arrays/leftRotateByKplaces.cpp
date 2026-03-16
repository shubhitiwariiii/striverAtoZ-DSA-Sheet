#include<bits/stdc++.h>
using namespace std;


// int leftRotateArrayKPlaces(int a[], int n, int k){
//     k = k%n;

//     int temp[k];
//     for(int i = 0; i < k; i++){
//         temp[i] = a[i];
//     }
//     for(int i=k; i<n; i++){
//         a[i-k] = a[i];
//     }
//     for(int i=n-k; i<n; i++){
//         a[i] = temp[i - (n-k)];
//     }
// }

//optimal approach -> TC: O(N), SC: O(1)

int leftRotateArrayKPlaces(int a[], int n, int k){
   reverse(a , a + k);
   reverse(a + k, a + n);
   reverse(a , a + n);
}

int main(){
    int n;
    cin >> n;

    int k;
    cin >> k;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int ans = leftRotateArrayKPlaces(a,n,k);
    cout << "after rotating array by k place is: " << endl;
    for(int ans : a){
        cout << ans << " ";
    }
    

    return 0;
}