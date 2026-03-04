#include<iostream>
using namespace std;

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    int last = fib(n-1);
    int slast = fib(n-2);
    return last + slast;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << fib(n);
    return 0;
}