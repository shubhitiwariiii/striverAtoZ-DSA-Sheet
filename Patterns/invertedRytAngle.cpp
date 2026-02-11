#include<bits/stdc++.h>
using namespace std;

void invertedRightAnglePattern(int n) {
    for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the right angle pattern: ";
    cin >> n;
    invertedRightAnglePattern(n);
    return 0;
}