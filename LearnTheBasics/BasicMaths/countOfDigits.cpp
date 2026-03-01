#include<iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 1; // Special case for 0
    int cnt = 0;
    
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}
int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0) {
        cout << "enter a non-negative integer." << endl;
        return 1;
    }
    int cnt = countDigits(n);
    cout << "Num of digits in " << n << " is: " << cnt << endl;

    return 0;
}