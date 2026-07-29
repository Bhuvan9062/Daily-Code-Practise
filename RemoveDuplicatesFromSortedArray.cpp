#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums)
{
    int n = nums.size();
    if(nums.empty())
        return 0;

    int i = 0;

    for(int j = 1; j < n; j++)
    {
        if(nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int newLength = removeDuplicates(nums);
    cout << "New length: " << newLength << endl;

    cout << "Modified array: ";
    for(int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}