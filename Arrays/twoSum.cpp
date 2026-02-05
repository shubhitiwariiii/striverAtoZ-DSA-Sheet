#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {}; // Return empty vector if no solution is found
}
int main() {
    int nums[] = {2, 7, 11, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    
    vector<int> vecNums(nums, nums + n);
    cout<< twoSum(vecNums, target)[0] << " " << twoSum(vecNums, target)[1] << endl;

    return 0;
}