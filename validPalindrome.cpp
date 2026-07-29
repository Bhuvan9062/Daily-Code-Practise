#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while(left < right)
    {
        while(left < right && !isalnum(s[left]))
        {
            left++;
        }
        while(left < right && !isalnum(s[right]))
        {
            right--;
        }
        if(tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";

    if(isPalindrome(s))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}