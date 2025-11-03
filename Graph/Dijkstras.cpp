#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<utility>
#include<climits>
using namespace std;

class graph {
    int V;  // number of vertices
    list<pair<int, int>> *l;  // adjacency list: (neighbor, weight)
public:
    graph(int V) {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    void addedge(int u, int v, int w) {  // u--v (weight = w)
        l[u].push_back(make_pair(v, w));
        l[v].push_back(make_pair(u, w));  // undirected graph
    }

    void dijkstra(int start) {
        vector<int> dist(V, INT_MAX);   // distance from start to every vertex
        dist[start] = 0;

        // Min-heap (priority queue): (distance, vertex)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push(make_pair(0, start));

        while (!pq.empty()) {
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();

            // Skip if we already found a shorter path
            if (d > dist[u]) continue;

            // Explore neighbors
            for (list<pair<int, int>>::iterator it = l[u].begin(); it != l[u].end(); ++it) {
                int v = it->first;
                int weight = it->second;

                // Relaxation step
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push(make_pair(dist[v], v));
                }
            }
        }

        // Print shortest distances
        cout << "\nShortest distances from vertex " << start << ":\n";
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " : ";
            if (dist[i] == INT_MAX)
                cout << "Not reachable\n";
            else
                cout << dist[i] << endl;
        }
    }

    void print() {
        cout << "Adjacency List:\n";
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (list<pair<int, int>>::iterator it = l[i].begin(); it != l[i].end(); ++it) {
                cout << "(" << it->first << "," << it->second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    graph Graph(5);
    Graph.addedge(0, 1, 4);
    Graph.addedge(0, 2, 1);
    Graph.addedge(2, 1, 2);
    Graph.addedge(1, 3, 1);
    Graph.addedge(2, 3, 5);
    Graph.addedge(3, 4, 3);

    cout << "Graph representation:\n";
    Graph.print();

    Graph.dijkstra(0); // start from vertex 0
    return 0;
}
