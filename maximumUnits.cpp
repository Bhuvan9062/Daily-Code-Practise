#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
{
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){
        return a[1] > b[1];
    });

    int ans = 0;

    for(auto box : boxTypes)
    {
        int boxes = min(truckSize, box[0]);

        ans += boxes * box[1];

        truckSize -= boxes;

        if(truckSize == 0) break;
    }
    return ans;
}

int main()
{
    vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};
    int truckSize = 4;

    cout << "Output will be : " << maximumUnits(boxTypes, truckSize) << endl;

    return 0;
}