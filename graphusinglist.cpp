#include<iostream>
#include<list>
#include<vector>

using namespace std;

class Graph
{
    public:

    int V;
    vector<list<int>> adj;

    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    void displayGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << " -> ";
            for (int neighbor : adj[i])
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int V = 5; // Number of vertices
    Graph g(V);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.displayGraph();

    return 0;
}