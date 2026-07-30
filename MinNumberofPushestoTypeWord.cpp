#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int minimumPushes(string word)
{
    int ans = 0;

    for(int i = 0; i < word.size(); i++)
    {
        ans += i/8 + 1;
    }
    return ans;
}

int main()
{
    string word;
    cout << "Enter the word: ";
    cin >> word;

    int result = minimumPushes(word);
    cout << "Minimum number of pushes required to type the word '" << word << "' is: " << result << endl;

    return 0;
}