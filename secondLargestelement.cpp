#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargestElement(vector<int> arr)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = secondLargestElement(arr);
    if (result == INT_MIN)
    {
        cout << "There is no second largest element in the array." << endl;
    }
    else
    {
        cout << "The second largest element in the array is: " << result << endl;
    }

    return 0;
}