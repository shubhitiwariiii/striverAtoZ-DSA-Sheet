//Ques: You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
// A number which completely divides another number is called it's divisor.
#include<bits/stdc++.h>
using namespace std;



void printDivisors(int n){
    vector<int> ls;
    for(int i=1; i<sqrt(n); i++){
        if(n%i == 0) {
            ls.push_back(i);
            if(n/i != i){
                ls.push_back(n/i);
            }    
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // vector<int> result;
    
    // for (int i = 1; i <= n; i++) {
    //     if (n % i == 0) {
    //         result.push_back(i);
    //     }
    // }
    
    // cout << "Divisors of " << n << " are: ";
    // for (int div : result) {
    //     cout << div << " ";
    // }
    // cout << endl;

    printDivisors(n);
  
    return 0;
}