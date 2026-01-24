#include<iostream>
#include<unordered_map>
#include<vector>
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
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    freq(arr, n);
    return 0;
}