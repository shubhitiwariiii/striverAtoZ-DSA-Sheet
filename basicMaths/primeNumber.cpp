//Ques: You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
// A prime number is a number which has no divisors except 1 and itself.

#include<iostream>
using namespace std;

bool checkPrime(int n){
    int cnt = 0;

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cnt++;
        }
    }

    if(cnt == 2){
        return true;
    }

    else{
        return false;
    }

}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = checkPrime(n);

    if(isPrime){
        cout << n << " is a prime number."<< endl;
    }

    else{
         cout << n << " is not a prime number."<< endl;
    }
    
    return 0;
}
// bool checkPrime(int n){
//     if(n <= 1) return false; // 0 and 1 are not prime numbers

//     for(int i=2; i*i <= n; i++){ // Check divisors from 2 to sqrt(n)
//         if(n % i == 0){
//             return false; // Found a divisor, not a prime number
//         }
//     }
//     return true; // No divisors found, it's a prime number
// }
// int main(){
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     bool isPrime = checkPrime(n);

//     if(isPrime){
//         cout << n << " is a prime number."<< endl;
//     }

//     else{
//          cout << n << " is not a prime number."<< endl;
//     }
    
//     return 0;
// }