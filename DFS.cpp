#include <iostream> using namespace std;
const int MAX = 100; // Maximum number of vertices (adjust as needed) int adj[MAX][MAX];	// Adjacency matrix
bool visited[MAX];   // Visited array int n;	// Number of vertices void DFS(int v) {
visited[v] = true;
cout << v << " ";
for (int i = 0; i < n; i++)
{

    if (adj[v][i] == 1 && !visited[i])
    {
        DFS(i);
    }
}
}

int main()
{

    int edges;

    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> edges;
    // Initialize adjacency matrix and visited array for (int i = 0; i < n; i++) {
    visited[i] = false;

    for (int j = 0; j < n; j++)
    {
        adj[i][j] = 0;
    }
}

// Input edges

cout << "Enter edges (u v) where u and v are vertex indices starting from 0:\n";
for (int i = 0; i < edges; i++)
{
    int u, v;

    cin >> u >> v;
    adj[u][v] = 1;
    adj[v][u] = 1; // For undirected graph; remove if directed
}

cout << "DFS traversal starting from vertex 0:\n";
DFS(0);
return 0;
}
