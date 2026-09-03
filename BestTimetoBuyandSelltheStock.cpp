#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int maxProfit(vector<int>& prices)
{
    int n = prices.size();
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for(int price : prices)
    {
        if(price < minPrice)
        {
            minPrice = price;
        }

        if(price - minPrice > maxProfit)
        {
            maxProfit = price - minPrice;
        }
    }

    return maxProfit;
}

int main()
{

    vector<int> number = {7,1,5,3,6,4};

    cout << "Maximum Profit will be : " << maxProfit(number) << endl;

    return 0;
}