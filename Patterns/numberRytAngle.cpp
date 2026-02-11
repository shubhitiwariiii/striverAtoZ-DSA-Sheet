#include<bits/stdc++.h>
using namespace std;

void numRightAnglePattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j <<" ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the right angle pattern: ";
    cin >> n;
    numRightAnglePattern(n);
    return 0;
}