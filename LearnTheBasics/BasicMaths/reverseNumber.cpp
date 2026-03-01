//You are given an integer n. Return the integer formed by placing the digits of n in reverse order.
#include<iostream>
using namespace std;

int main(){
    int n, revNum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int origNum = n;
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n /= 10;
    }
    cout << "Reversed number is: " << revNum << endl;
}