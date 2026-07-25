#include<iostream>
using namespace std;

int peakElementofMountainArray(int arr[], int n) {
    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low; // or return high; both are the same at this point
}

int main()
{
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int peakIndex = peakElementofMountainArray(arr, n);
    cout << "Peak element is at index: " << peakIndex << endl;
    
    return 0;
}