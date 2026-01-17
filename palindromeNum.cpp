#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    int origNum = n;
    int revNum = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        revNum = revNum * 10 + lastDigit;
        n /= 10;
    }
    if (origNum == revNum) {
        cout << origNum << " is a palindrome number." << endl;
    } else {
        cout << origNum << " is not a palindrome number." << endl;
    }
    return 0;
}