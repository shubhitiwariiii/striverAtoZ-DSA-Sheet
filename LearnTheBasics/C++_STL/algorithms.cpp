#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>p1,pair<int, int>p2){
    if(p1.second < p2.second){
        return true;   
    }  else if(p1.second == p2.second){
        if(p1.first > p2.second) return true;
    }
    return false;
}

void explainExtra(){
    // sort(a, a+n);
    // sort(v.begin(), v.end());
    // sort(a+2, a+4);
    // sort(a, a+n, greater<int>);

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}}; // {{4, 1}, {2, 1}, {1, 2}}
    //sort it according to second element , if second element same
    //sort it acc to first element but in decreasing fashion
    // sort(a, a+n, comp);

    int num = 7;
    // int cnt = __builtin_popcount();

    long long num = 165434782625;
    // int cnt = __builtin_popcountll();

    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    // int maxi = *max_element(a, a+n); // *-> gives value
}

int main(){

    return 0;
}