#include <bits/stdc++.h>
using namespace std;

// void print1ToN(int i , int n) {
//     // Base case: if n is 0, return
//     if (i>n) {
//         return;
//     }
//     cout << i << endl;
//     print1ToN(i + 1, n);
    
// }
void print1toN(int i, int n){
    //base case
    if(i<1){
        return;
    }
    print1toN(i-1,n);
    cout << i << endl;
}
int main() {
    int n;
    cin >> n;

    print1toN(n,n);

    return 0;
}