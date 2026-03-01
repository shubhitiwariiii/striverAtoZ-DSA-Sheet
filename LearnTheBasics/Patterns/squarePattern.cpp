#include<bits/stdc++.h>
using namespace std;

void squarePattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    squarePattern(n);
    return 0;
}