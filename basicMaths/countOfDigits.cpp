#include<iostream>
using namespace std;

int countDigits(int number) {
    if (number == 0) return 1; // Special case for 0
    int count = 0;
    
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}
int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    int count = countDigits(number);
    cout << "Number of digits in " << number << " is: " << count << endl;

    return 0;
}