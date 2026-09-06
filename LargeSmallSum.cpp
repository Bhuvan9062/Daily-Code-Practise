#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int largesmallSum(vector<int>& nums)
{
    int n = nums.size();

    if(n <= 3) return 0;

    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            even.push_back(nums[i]);
        else
            odd.push_back(nums[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    int second_largest_even = even[even.size() - 2];
    int second_smallest_odd = odd[1];

    return second_largest_even + second_smallest_odd;
}

int main()
{
    vector<int> number = {3,2,1,7,5,4};
    cout << "Output : " << largesmallSum(number) << endl;

    return 0;
}