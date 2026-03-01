//ques1 : You are given an integer n. Return the value of n! or n factorial.
// Factorial of a number is the product of all positive integers less than or equal to that number.
#include <iostream>
using namespace std;

int factorialUsingRecursion(int n) {
    // Base case: if n is 0 or 1, the factorial is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n! = n * (n-1)!
    return n * factorialUsingRecursion(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive integer N: ";
    cin >> n;

    int factorial = factorialUsingRecursion(n);
    cout << "The factorial of " << n << " is: " << factorial << endl;

    return 0;
}