#include<bits/stdc++.h>
using namespace std;

void rightAnglePattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the right angle pattern: ";
    cin >> n;
    rightAnglePattern(n);
    return 0;
}