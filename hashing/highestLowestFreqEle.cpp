//Ques1: Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
// Please note that this section might seem a bit difficult without prior knowledge on what hashing is, we will soon try to add basics concepts for your ease! If you know the concepts already please go ahead to give a shot to the problem. Cheers!

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int highestFreqEle(vector<int> &arr){
    unordered_map<int,int> freqMap;
    for(int i=0;i<arr.size();i++){
        freqMap[arr[i]]++;
    }
    int maxFreq=0;
    int ans=-1;
    for(auto it:freqMap){
        if(it.second>maxFreq){
            maxFreq=it.second;
            ans=it.first;
        }
        else if(it.second==maxFreq && it.first<ans){
            ans=it.first;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=highestFreqEle(arr);
    cout<<"Most frequent element (smallest in case of tie) is: "<<res<<endl;
    return 0;
}

