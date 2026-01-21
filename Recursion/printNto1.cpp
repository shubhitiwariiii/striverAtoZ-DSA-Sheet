// Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.
// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in decreasing order from n to 1
#include <iostream>
using namespace std;

void printNto1(int n) {
    // Base case: if n is 0, return
    if (n == 0) {
        return;
    }
    // Print the current number before the recursive call
    cout << n << endl;
    // Recursive call with n-1
    printNto1(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << "Printing numbers from " << n << " to 1:\n";
    printNto1(n);

    return 0;
}