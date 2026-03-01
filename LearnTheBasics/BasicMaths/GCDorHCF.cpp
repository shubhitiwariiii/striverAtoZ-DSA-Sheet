//ques: You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.
//The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // int a = n1;
    // int b = n2;

    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // cout << "GCD of " << n1 << " and " << n2 << " is: " << a << endl;


    // for(int i=1; i<= min(n1,n2); i++){
    //     if(n1%i == 0 && n2%i == 0){
    //         int gcd = i;
    //         cout << gcd << " ";
            
    //     } 
    // }

    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a == 0) cout << b;
    else cout << a;

    return 0;
}