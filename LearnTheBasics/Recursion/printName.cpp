#include<bits/stdc++.h>
using namespace std;

//TC : O(n), SC: O(n)
void fname(int i, int n){
    if(i > n){
        return;
    }
    cout << "shubhi" << endl;
    fname(i+1, n);
}
int main(){
    int n;
    cin >> n;
    fname(1,n);

    return 0;
}