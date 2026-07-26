#include<iostream>
using namespace std;

int minBitFlips(int start, int end)
{
    int x = start ^ end;
    int count = 0;
    while(x > 0)
    {
        count += x & 1;
        x >>= 1;
    }

    return count;
}

int main()
{
    int start, end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;

    int result = minBitFlips(start, end);
    cout << "Minimum bit flips required to convert " << start << " to " << end << " is: " << result << endl;

    return 0;
}