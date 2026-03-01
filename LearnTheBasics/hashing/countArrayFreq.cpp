#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n){
    unordered_map<int, int>map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    for(auto it: map){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of array:";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    // // precomput
    // int hash[13] = {0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]] += 1;
    // }
    
    // int q;
    // cin >> q;
    // while(q--){
    //     int num;
    //     cin >> num; 
    //     //fetch
    //     cout << hash[num] <<"->";
    // }

    // string s;
    // cin >> s;

    // //precompute
    // int hash[26] = {0};
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i] - 'a']++;
    // }

    // int q;
    // cin >> q;
    // while(q--){
    //     char c;
    //     cin >> c;
    //     //fetch
    //     cout << hash[c-'a'];
    // }


    // int n;
    // cout << "enter size of array: ";
    // cin >> n;
    // int arr[n];
    // cout << "enter the elements of array:";
    // map<int, int> mpp;
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    //     mpp[arr[i]]++;
    // }
    // //precompute
    
    // for(auto it : mpp){
    //     cout << it.first <<"->" << it.second << endl;
    // }

    // int q;
    // cin >> q;
    // while(q--){
    //     int num;
    //     cin >> num; 
    //     //fetch
    //     cout << mpp[num] << endl;
    // }

    freq(arr, n);
    return 0;
}