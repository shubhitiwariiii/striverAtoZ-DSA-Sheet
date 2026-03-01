//Ques: You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> result;
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            result.push_back(i);
        }
    }
    
    cout << "Divisors of " << n << " are: ";
    for (int div : result) {
        cout << div << " ";
    }
    cout << endl;
    
    return 0;
}