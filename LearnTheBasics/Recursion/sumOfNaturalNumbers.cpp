#include<bits/stdc++.h>
using namespace std;


void sumOfNaturalNumber(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    sumOfNaturalNumber(i-1, sum+i);
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    sumOfNaturalNumber(n,0);

    return 0;
}