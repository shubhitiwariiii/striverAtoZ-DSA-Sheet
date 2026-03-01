//Ques: You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.
// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int origNum = n;
    int sum = 0;
    
    while(n>0){
        int ld = n%10;
        sum += (ld*ld*ld);
        n /= 10;
    }
    cout << "sum is : " << sum << endl;
    if(origNum == sum){
        cout << "number is armstrong number." << endl;
    }else{
        cout << "number is armstrong number." << endl;
    }

    return 0;
}