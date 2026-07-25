#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// Brute force approach to find two indices such that their corresponding values sum up to the target:

void twosum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Indices: " << i << ", " << j << endl;
                return;
            }
        }
    }
    cout << "No two sum solution found." << endl;
}

// Two Pointer approach to find two indices such that their corresponding values sum up to the target:

void twoSum(vector<int>&nums, int target)
{
    sort(nums.begin(), nums.end());
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            cout << "Indices: " << left << ", " << right << endl;
            return;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    cout << "No two sum solution found." << endl;
}

// Hash Map approach to find two indices such that their corresponding values sum up to the target:

void TwoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            cout << "Indices: " << numMap[complement] << ", " << i << endl;
            return;
        }
        numMap[nums[i]] = i;
    }
    cout << "No two sum solution found." << endl;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    cout << "Using Brute Force Approach:" << endl;
    twosum(nums, target);

    cout << "Using Two Pointer Approach:" << endl;
    twoSum(nums, target);

    cout << "Using Hash Map Approach:" << endl;
    TwoSum(nums, target);

    return 0;
}