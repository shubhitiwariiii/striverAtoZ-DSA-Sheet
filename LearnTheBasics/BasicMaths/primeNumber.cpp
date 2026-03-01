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
