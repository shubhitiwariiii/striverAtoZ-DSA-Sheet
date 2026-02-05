#include<iostream>
#include<climits>   
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int currSum = 0, maxSum = INT_MIN;
    for(int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum<0) currSum = 0;
    }
    return maxSum;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int result = maxSubArray(nums);
    cout << "The maximum subarray sum is: " << result << endl;
    
    return 0;
}