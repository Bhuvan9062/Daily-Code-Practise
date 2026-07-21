#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int v, e;
    cin >> v >> e;

    vector<vector<int>> graph(v, vector<int>(v, 0));

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1; // For undirected graph
    }
    return 0;
}