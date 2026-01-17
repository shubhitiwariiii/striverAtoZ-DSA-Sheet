// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int origNum = n;
    int sum = 0;
    int count = 0;
    int temp = n;
    // Count the number of digits
    while (temp > 0) {
        temp /= 10;
        count++;
    }
    temp = n;
    // Calculate the sum of digits raised to the power of count
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == origNum) {
        cout << origNum << " is an armstrong number." << endl;
    } else {
        cout << origNum << " is not an armstrong number." << endl;
    }
    
    return 0;
}