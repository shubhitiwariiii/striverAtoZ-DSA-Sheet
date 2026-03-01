#include<bits/stdc++.h>
using namespace std;

void invertedRightAngleNumPattern(int n) {
    for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << i+1 <<" ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the right angle pattern: ";
    cin >> n;
    invertedRightAngleNumPattern(n);
    return 0;
}