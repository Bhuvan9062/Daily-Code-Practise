#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int countSuperior(vector<int>& nums)
{
    int n = nums.size();
    int count = 0;
    int maxRight = INT_MIN;

    for(int i = n - 1; i >= 0; i--)
    {
        if(nums[i] > maxRight)
        {
            count++;
            maxRight = nums[i];
        }
    }
    return count;
}

int main()
{
    vector<int> number = {8,10,6,2,9,7};
    cout << "Output : " << countSuperior(number) << endl;

    vector<int> numbers = {1,2,3,4};
    cout << "Output : " << countSuperior(numbers) << endl;

    return 0;
}