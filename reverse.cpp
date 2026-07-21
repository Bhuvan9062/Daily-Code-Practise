#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "Reverse of the Number is : " << rev << endl;
    return 0;
}