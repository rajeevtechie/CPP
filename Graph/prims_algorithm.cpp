#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<utility>
#include<climits>   // for INT_MAX
using namespace std;

class graph {
    int V;
    list<pair<int, int>> *l; // adjacency list: (neighbor, weight)
public:
    graph(int V) {
        this->V = V;
        l = new list<pair<int, int>>[V];
    }

    void addedge(int u, int v, int w) {  // u--v (weight = w)
        l[u].push_back(make_pair(v, w));
        l[v].push_back(make_pair(u, w));
    }

    void primsAlgorithm(int start) {
        vector<int> key(V, INT_MAX);     // stores minimum weight edge for each vertex
        vector<int> parent(V, -1);       // stores MST structure
        vector<bool> inMST(V, false);    // marks included vertices

        // Min-heap: (key, vertex)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        key[start] = 0;
        pq.push(make_pair(0, start));

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            if (inMST[u]) continue;  // skip if already added to MST

            inMST[u] = true;

            // explore all adjacent vertices
            for (list<pair<int, int>>::iterator it = l[u].begin(); it != l[u].end(); ++it) {
                int v = it->first;
                int weight = it->second;

                if (!inMST[v] && weight < key[v]) {
                    key[v] = weight;
                    parent[v] = u;
                    pq.push(make_pair(key[v], v));
                }
            }
        }

        // print MST result
        cout << "\nEdges in the Minimum Spanning Tree:\n";
        int totalWeight = 0;
        for (int i = 0; i < V; i++) {
            if (parent[i] != -1) {
                cout << parent[i] << " - " << i << "  (weight: " << key[i] << ")\n";
                totalWeight += key[i];
            }
        }
        cout << "\nTotal weight of MST = " << totalWeight << endl;
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
    Graph.addedge(0, 1, 2);
    Graph.addedge(0, 3, 6);
    Graph.addedge(1, 2, 3);
    Graph.addedge(1, 3, 8);
    Graph.addedge(1, 4, 5);
    Graph.addedge(2, 4, 7);
    Graph.addedge(3, 4, 9);

    cout << "Graph representation:\n";
    Graph.print();

    Graph.primsAlgorithm(0); // start Prim’s from vertex 0
    return 0;
}
