#include<iostream>
#include<string>
using namespace std;

int operationsBinaryString(string str)
{
    if(str.empty()) return -1;

    int res = str[0] - '0';

    for(int i = 1; i < str.size(); i += 2)
    {
        char op = str[i];
        int num = str[i + 1] - '0';

        if(op == 'A')
        {
            res = res & num;
        }
        else if(op == 'B')
        {
            res = res | num;
        }
        else if(op == 'C')
        {
            res = res ^ num;
        }
    }
    return res;
}

int main()
{
    string str1 = "1C0C111A0B1";
    cout << "Output: " << operationsBinaryString(str1) << endl;
    
    string str2 = "0A1";
    cout << "Output: " << operationsBinaryString(str2) << endl;
    
    string str3 = "";
    cout << "Output: " << operationsBinaryString(str3) << endl;

    return 0;
}