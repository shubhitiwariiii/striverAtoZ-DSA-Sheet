//ques: You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
//The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int a = n1;
    int b = n2;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    

    cout << "GCD of " << n1 << " and " << n2 << " is: " << a << endl;
    return 0;
}