#include<iostream>
#include<vector>
using namespace std;

int maximiseTop(vector<int>& nums, int k)
{
    int n = nums.size();
    if(n == 1){
        return(k % 2 == 0) ? nums[0] : -1;
    }

    int ans = -1;

    for(int i = 0; i < min(k, n); i++){
        ans = max(ans, nums[i]);
    }

    if(k < n){
        ans = max(ans, nums[k]);
    }

    return ans;
}

int main()
{
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    int result = maximiseTop(nums, k);
    cout << "The maximum possible topmost element after " << k << " operations is: " << result << endl;

    return 0;
}