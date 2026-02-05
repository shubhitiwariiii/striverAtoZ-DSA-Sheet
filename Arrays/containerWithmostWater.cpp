#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height){
    int maxWater = 0;
    int left = 0, right = height.size() - 1;
    while(left < right){
        int w = right - left;
        int h = min(height[left], height[right]);
        int currentWater = w * h;
        maxWater = max(maxWater, currentWater);
        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> height(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> height[i];
    }
    
    int result = maxArea(height);
    cout << "The maximum area of water that can be contained is: " << result << endl;
    
    return 0;
}