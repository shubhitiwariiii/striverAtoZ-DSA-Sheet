// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.
#include <iostream>
using namespace std;

void print1ToN(int n) {
    // Base case: if n is 0, return
    if (n == 0) {
        return;
    }
    // Recursive call with n-1
    print1ToN(n - 1);
    // Print the current number after the recursive call
    cout << n << endl;
}
int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << "Printing numbers from 1 to " << n << ":\n";
    print1ToN(n);

    return 0;
}