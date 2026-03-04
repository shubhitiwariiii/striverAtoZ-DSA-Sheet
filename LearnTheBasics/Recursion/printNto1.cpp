#include<bits/stdc++.h>
using namespace std;

void printNto1(int i, int n){
    //base case
    if(i<1){
        return;
    }
    cout << i << endl;
    printNto1(i-1,n);
}
int main(){
    int n;
    cout << "enter the number: ";
    cin >> n;
    printNto1(n,n);

    return 0; 
}