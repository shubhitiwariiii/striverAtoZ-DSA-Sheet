// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.
#include <iostream>
using namespace std;

int sumOfFirstNNaturalNumbers(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: sum of first n natural numbers is n + sum of first (n-1) natural numbers
    return n + sumOfFirstNNaturalNumbers(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer N: ";
    cin >> n;

    int sum = sumOfFirstNNaturalNumbers(n);
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}